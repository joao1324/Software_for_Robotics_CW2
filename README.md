# Software for Robotics – Coursework 2

ROS 2 implementation of a 3D drone position controller and an autonomous navigation stack, both running in simulation.

**Robot name:** `chrono_guardian`

## Overview

The submission contains three packages:

| Package | Node | Description |
|---|---|---|
| `chrono_guardian_bridge_pkg` | — | ROS 2 ↔ Gazebo Harmonic bridges for the flying box drone |
| `chrono_guardian_controller_pkg` | `chrono_guardian_controller_node` | Action Server that moves the drone to target poses via velocity control |
| `chrono_guardian_navigation_pkg` | `chrono_guardian_navigation_node` | Nav2-based node that localises and navigates a TurtleBot4 to a goal |

---

## Tasks

### Task 1 – Gazebo Bridge (`chrono_guardian_bridge_pkg`)

A launch file (`chrono_guardian_bridge_launch`) sets up four single-directional `ros_gz_bridge` connections:

| Gazebo Topic | ROS 2 Topic | Direction |
|---|---|---|
| `/model/box/cmd_vel` | `/model/box/cmd_vel` | ROS 2 → Gazebo |
| `/model/box/pose` | `/tf` | Gazebo → ROS 2 |
| `/model/target_0/pose` | `/tf` | Gazebo → ROS 2 |
| `/model/target_1/pose` | `/tf` | Gazebo → ROS 2 |

### Task 2 – Drone Controller (`chrono_guardian_controller_pkg`)

A periodic node (`chrono_guardian_controller_node`, 100 Hz) that:

- Listens to `/tf` via a `TransformListener` to track the drone's current pose
- Exposes an Action Server at `robot/set_pose` using the `DroneControl.action` interface
- Publishes velocity commands to `/model/box/cmd_vel` to drive the drone toward the goal
- Succeeds when the drone is within **0.1 m** of the target; fails if not reached within **5 seconds**
- Moves the drone to **1 m above `target_0`** from the simulation starting pose

Velocity limits enforced:
- Linear: −0.5 ≤ vᵢ ≤ 0.5 m/s
- Angular: −0.8 ≤ ωz ≤ 0.8 rad/s

### Task 3 – Autonomous Navigation (`chrono_guardian_navigation_pkg`)

A node (`chrono_guardian_navigation_node`) that:

- Waits for Nav2 to be ready, then publishes an initial pose with the required covariance
- Uses the Nav2 action server to navigate the TurtleBot4 to the target location shown in the arena map
- Reaches the goal (tolerance 0.5 m) within **60 seconds**

---

## Setup & Run

### Prerequisites

- ROS 2 (version as defined in the course tutorial)
- Gazebo Harmonic
- `ros_gz_bridge`, `tf2_ros`, Nav2
- `sfr_coursework2_interface_package` (provided on Canvas)

### Build

```bash
cd ~/colcon_ws
colcon build
source install/setup.bash
```

### Launch the Gazebo bridge

```bash
ros2 launch chrono_guardian_bridge_pkg chrono_guardian_bridge_launch.py
```

### Run the drone controller

```bash
ros2 run chrono_guardian_controller_pkg chrono_guardian_controller_node
```

### Run the navigation node

```bash
# First launch the Nav2 TurtleBot4 simulation in a separate terminal:
ros2 launch nav2_bringup tb4_simulation_launch.py headless:=False sigterm_timeout:=120

# Then run the navigation node:
ros2 run chrono_guardian_navigation_pkg chrono_guardian_navigation_node
```

---

## Notes

- All nodes run at **100 Hz**
- No threading, subprocess, or internet-access libraries are used
- Only Python Standard Library imports plus the ROS 2 / Nav2 dependencies defined in the course tutorial
