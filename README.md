# Deep-RL-Self-Driving-Robot Documentation

UCF HEC404 Lab: A deep reinforcement learning platform for self driving robots
## Books:
[Learning ROS for Robotics Programming - Second Edition](https://www.packtpub.com/hardware-and-creative/learning-ros-robotics-programming-second-edition)
## Sources:
  For rapid setup of environment the following sources has been used:   
 1. [AWS-Deep Racer](https://github.com/aws-robotics/aws-robomaker-sample-application-deepracer)   
 2. [Univerisity of Virginia](https://github.com/linklab-uva/f1tenth_gtc_tutorial#1-install-robot-operating-system-ros)   
 
## Simulation of real environment:
The rosdep command line too enables you to easily install system dependencies for the source you want
to compile and is required to run some core components in ROS.   
$ sudo rosdep init
$ rosdep update

Add this changes to ~/.bashrc file:
source /opt/ros/melodic/setup.bash
source ~/catkin_ws/devel/setup.bash
export ROS_MASTER_URI=http://192.168.0.151:11311
export ROS_IP=192.168.0.151
source ~/catkin_ws/devel/setup.bash


Install gazebo_worlds package.   
For checking the model, you will only have to start the .launch file using the
following command:     

$ roslaunch gazebo_ros racetrack.launch

## Simulation 1 [Keyboard Control]:   

Terminal 1:  
roslaunch racecar_gazebo racecar.launch   

Terminal 2:   
roslaunch console keyboard_teleop.launch  

## Simulation 2 [WallFollowing]:

Terminal 1: 
roslaunch racecar_gazebo racecar_simplerun.launch 

Terminal 2: 
roslaunch simulator simple_run.launch 

## Simulation 2 [SLAM]: 
With the use of Hector Mapping  
