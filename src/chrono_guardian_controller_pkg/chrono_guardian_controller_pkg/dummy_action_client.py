import rclpy
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from rclpy.node import Node
from rclpy.task import Future

import tf2_ros

import time

from geometry_msgs.msg import PoseStamped, Point
from sfr_coursework2_interface_package.action import DroneControl

class DummyActionClient(Node):
    """A ROS2 Node with an Action Client for MoveStraightIn2D."""

    def __init__(self):
        super().__init__('dummy_action_client')

        self.action_client = ActionClient(self, DroneControl, 
                                          'chrono_guardian/set_pose')

        self.send_goal_future = None # This will be used in `send_goal`
        self.get_result_future = None # This will be used in 'goal_response_callback'

        self.transform_listener_buffer = tf2_ros.Buffer()
        self.transform_listener = tf2_ros.TransformListener(self.transform_listener_buffer, self)
        
        self.parent_name = "shapes"  
        self.child_name2 = "target_0"

        self.timer_period: float = 0.01
        #self.timer = self.create_timer(self.timer_period, self.get_target_pose)



    def get_target_pose(self) -> PoseStamped | None:
        try:
            tfs =   self.transform_listener_buffer.lookup_transform(
                    self.parent_name,
                    self.child_name2,
                    rclpy.time.Time())
            
            self.target0_position = tfs.transform.translation
            self.target0_orientation = tfs.transform.rotation

            desired_pose = PoseStamped()
            desired_pose.header.frame_id = self.parent_name
            desired_pose.header.stamp = self.get_clock().now().to_msg()
            desired_pose.pose.position = Point(
            x=self.target0_position.x,
            y=self.target0_position.y,
            z=self.target0_position.z + 1.0
            )
            desired_pose.pose.orientation = self.target0_orientation


            self.get_logger().info(f"Target_0 Position: {self.target0_position}, Target_0 Orientation: {self.target0_orientation}")

            return desired_pose

        except tf2_ros.TransformException as e:

            self.get_logger().error(
                f'Could not get transform from `{self.parent_name}` to `{self.child_name2}`: {e}')
            rclpy.spin_once(self, timeout_sec=0.1)
            time.sleep(0.1)
            return None
        

            
    

    def send_goal_async(self, desired_position: PoseStamped) -> None:
        goal_msg = DroneControl.Goal()
        goal_msg.desired_pose = desired_position

        while not self.action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info(f'action {self.action_client} not available, waiting...')

        self.get_logger().info(f'Sending goal: {desired_position}.')

        self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.action_feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future: Future) -> None:
        goal: ClientGoalHandle = future.result()

        if not goal.accepted:
            self.get_logger().info('Goal was rejected by the server.')
            return
        self.get_logger().info('Goal was accepted by the server.')

        self.get_result_future = goal.get_result_async()
        self.get_result_future.add_done_callback(self.action_result_callback)

    def action_result_callback(self, future: Future) -> None:
        response: DroneControl.Response = future.result()
        self.get_logger().info(f'Reached final position: {response.result.success}.')

    def action_feedback_callback(self, feedback_msg: DroneControl.Feedback) -> None:
        pose = feedback_msg.feedback.current_pose.pose
        self.get_logger().info(
            f'Current Pose: x={pose.position.x:.3f}, y={pose.position.y:.3f}, z={pose.position.z:.3f}'
        )


def main(args=None):
    """
    The main function.
    :param args: Not used directly by the user, but used by ROS2 to configure certain aspects of the Node.
    """
    try:
        rclpy.init(args=args)

        node = DummyActionClient()

        # Send the goal once and then do nothing until the user shuts this node down.
        desired_position = None
        
        # LOOP UNTIL WE GET A VALID POSE
        while desired_position is None:
            desired_position = node.get_target_pose()
            if desired_position is None:
                # Optional: node.get_logger().info('Waiting for TF...')
                # Important: spin so TF listener can process messages!
                rclpy.spin_once(node, timeout_sec=0.1)
                # No need for time.sleep if spin_once has a timeout
        
        # Now we definitely have a pose
        node.send_goal_async(desired_position)

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()