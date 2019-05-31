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

Install gazebo_worlds package.   
For checking the model, you will only have to start the .launch file using the
following command:     

$ roslaunch gazebo_ros racetrack.launch

