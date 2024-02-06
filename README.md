# Jetmax robot simulation

Run Dockerfile with the VSCode extension (The recommended VSCode version to avoid issues is version 1.85):

[Articulated Robotics: If you're not developing with this, you're wasting your time](https://www.youtube.com/watch?v=dihfA7Ol6Mw&t=127s)

This docker image runs an Ubuntu 18.04 with ROS Melodic and the (jetmax-gazebo)[] repository for simulatinf the Hiwonder Jetmax robot arm.

## Running the simulation

Once the Docker image is built and run, the workspace needs to be sourced:

```bash
source /jetmax/devel/setup.bash
```

To launch the gazebo simulation run:

```bash
roslaunch jetmax_control jetmax_control.launch
```

The robot will be displayed in Gazebo in its starting position with some issues, to send the robot to home position execute:

```bash
rosrun jetmax_control go_home.py
```

The jetmax_control package offers 2 diferent ways of controlling the robot in gazebo through ROS services, the `forward_kinematics` service and the `inverse_kinematics` service:

* Inverse kinematics service:

```bash
rosservice call /jetmax_control/inverse_kinematics "x: 0.0
y: -100.0
z: 100.0"
```

* Forward kinematics service:

```bash
rosservice call /jetmax_control/forward_kinematics "angle_rotate: 90.0
angle_left: 90.0
angle_right: 0.0
```