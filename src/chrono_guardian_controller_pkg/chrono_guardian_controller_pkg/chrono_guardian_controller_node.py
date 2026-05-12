import time
from math import sqrt

import rclpy
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from rclpy.node import Node

import tf2_ros

from geometry_msgs.msg import Twist, PoseStamped, Point
from sfr_coursework2_interface_package.action import DroneControl


class Chrono_Guardian_Controller_Node(Node):
    """A ROS2 Node with an Action Server for MoveStraightIn2D."""

    def __init__(self):
        super().__init__('chrono_guardian_controller_node')
        # self.current_position = Point()
        # self.MAX_ITERATIONS: int  = 100
        self.sampling_time: float = 0.01
        
        self.action_server = ActionServer(
            self,
            DroneControl,
            'chrono_guardian/set_pose',
            self.execute_callback)

        # Setting up the pose publisher
        self.drone_publisher = self.create_publisher(

            msg_type=Twist,
            topic='/model/box/cmd_vel',
            qos_profile=1)

        # Setting up the TransformListener
        self.transform_listener_buffer = tf2_ros.Buffer()
        self.transform_listener = tf2_ros.TransformListener(self.transform_listener_buffer, self)
        
        self.parent_name = "shapes"
        self.child_name1 = "box"  
        self.child_name2 = "target_0"

        self.current_box_position = None
        self.previous_box_position = None
        self.previous_time = None
        self.current_velocity = Point()  # or store as (vx, vy, vz)

        self.timer_period: float = 0.01
        self.timer = self.create_timer(self.timer_period, self.get_pose)

        # try:
        #     tfs =   self.transform_listener_buffer.lookup_transformf (
        #             self.parent_name,
        #             self.child_name2,
        #             rclpy.time.Time())
            
        #     self.target0_position = tfs.transform.translation
        #     self.target0_orientation = tfs.transform.rotation

        #     self.get_logger().info(f"Target_0 Position: {self.target0_position:.3f}, Target_0 Orientation: {self.target0_orientation:.3f}")

        # except tf2_ros.TransformException as e:

        #     self.get_logger().error(
        #         f'Could not get transform from `{self.parent_name}` to `{self.child_name2}`: {e}')

       

##############################################################################
############################# TF LISTENER PART ###############################
##############################################################################

    def get_pose(self):

            try:
                tfs =   self.transform_listener_buffer.lookup_transform(
                        self.parent_name,
                        self.child_name1,
                        rclpy.time.Time())
                
                self.current_box_position = tfs.transform.translation
                self.current_box_orientation = tfs.transform.rotation

                #self.get_logger().info(f"Box Position: {self.current_box_position}, Box Orientation: {self.current_box_orientation}")

            except tf2_ros.TransformException as e:

                self.get_logger().error(
                    f'Could not get transform from `{self.parent_name}` to `{self.child_name1}`: {e}')
    
    
            


#############################################################################
############################### ACTION PART #################################
#############################################################################

    def get_distance(self, desired_position: PoseStamped) -> float:
        """
        Calculates the error norm (e.g. Euclidean distance) between the current position and the desired position.
        Notice that we have chosen to ignore the z-axis as this is a 2D motion.
        """

        x = self.current_box_position.x
        y = self.current_box_position.y
        z = self.current_box_position.z

        xd = desired_position.pose.position.x
        yd = desired_position.pose.position.y
        zd = desired_position.pose.position.z
    

        return sqrt((x - xd) ** 2 + (y - yd) ** 2 + (z - zd) ** 2)

    def move_the_object_with_velocity(self, desired_position: PoseStamped, stop: bool, desired_speed: float = 10.0) -> None:
        """
        Moves the object with the desired speed for one iteration. Must be called until objective is reached or
        the controller times out.
        """
        distance = self.get_distance(desired_position)
        twist = Twist()
        # Prevent us from dividing by zero or a small number we currently do not care about
        if stop:
            twist.linear.x = 0.0
            twist.linear.y = 0.0
            twist.linear.z = 0.0

            twist.angular.x = 0.0
            twist.angular.y = 0.0   
            twist.angular.z = 0.0
            self.drone_publisher.publish(twist)
            return

        x_direction = (desired_position.pose.position.x - self.current_box_position.x) / distance
        y_direction = (desired_position.pose.position.y - self.current_box_position.y) / distance
        z_direction = (desired_position.pose.position.z - self.current_box_position.z) / distance

        # if distance > 0.8:
        #     desired_speed = 10.0
        # else:
        #     desired_speed = 2.0

        #desired_speed = 50.0

        # Apply new position based on the desired velocity and direction
        twist.linear.x = x_direction * desired_speed 
        twist.linear.y = y_direction * desired_speed
        twist.linear.z = z_direction * desired_speed

        twist.linear.x = max(-0.5, min(0.5, twist.linear.x))
        twist.linear.y = max(-0.5, min(0.5, twist.linear.y))
        twist.linear.z = max(-0.5, min(0.5, twist.linear.z))

        twist.angular.x = 0.0
        twist.angular.y = 0.0   
        twist.angular.z = 0.0

        self.get_logger().info(f'Moving the object with velocity: {twist.linear.x:.3f}, {twist.linear.y:.3f}, {twist.linear.z:.3f}')

        self.drone_publisher.publish(twist)




    def execute_callback(self, goal: ServerGoalHandle) -> DroneControl.Result:
        """
        To be attached to the Action as its callback. Receives a goal position and tries to move to that position.
        It will return the Euclidean distance between the current position and the desired position as the feedback.
        If the goal is reached within a given threshold it will succeed, otherwise it will abort.
        """
        
        desired_position = PoseStamped()
        desired_position = goal.request.desired_pose 

        self.get_logger().warning(f'current_position is {self.current_box_position}.')
        self.get_logger().warning(f'desired_position set to {desired_position}.')

        feedback_msg = DroneControl.Feedback()
        start_time = self.get_clock().now()
        
        # Let's limit the maximum number of iterations this can accept
        while(True):
            elapsed = (self.get_clock().now() - start_time).nanoseconds / 1e9
            if elapsed >= 5.0:
                self.get_logger().error(f'Goal aborted: timeout exceeded. Time elapsed: {elapsed:.2f}s')
                result = DroneControl.Result()
                result.success = False
                goal.abort()
                self.move_the_object_with_velocity(desired_position, True)
                return result
            
            rclpy.spin_once(self, timeout_sec=0.001)
            distance = self.get_distance(desired_position)
            self.get_logger().warn(f'Current distance to goal: {distance:.3f}m')

            current_pose = PoseStamped()
            current_pose.header.frame_id = self.parent_name
            current_pose.header.stamp = self.get_clock().now().to_msg()
            #self.get_pose()  # Updates self.current_box_position
            pos = self.current_box_position  # Use the stored value

            current_pose.pose.position = Point(
                x=pos.x,
                y=pos.y,
                z=pos.z
            )

            current_pose.pose.orientation = self.current_box_orientation
            feedback_msg.current_pose = current_pose
            goal.publish_feedback(feedback_msg)

            # We define a threshold to see if it managed to reach the goal or not.
            if distance < 0.1:
                result = DroneControl.Result()
                result.success = True
                goal.succeed()
                self.get_logger().info(f'Goal succeeded in {elapsed:.2f}s!')
                self.move_the_object_with_velocity(desired_position, True)
                return result
            
            self.move_the_object_with_velocity(desired_position, False)

            # A sleep illustrating the time it would take in real life for a robot to move
            #time.sleep(self.sampling_time)

        


def main(args=None):
    """
    The main function.
    :param args: Not used directly by the user, but used by ROS2 to configure certain aspects of the Node.
    """
    try:
        rclpy.init(args=args)

        node = Chrono_Guardian_Controller_Node()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()