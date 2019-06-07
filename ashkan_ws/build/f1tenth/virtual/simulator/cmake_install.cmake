# Install script for directory: /home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/simulator/msg" TYPE FILE FILES
    "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator/msg/PIDInput.msg"
    "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator/msg/DriveValues.msg"
    "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator/msg/CarControlData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/simulator/cmake" TYPE FILE FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/build/f1tenth/virtual/simulator/catkin_generated/installspace/simulator-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/include/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/share/roseus/ros/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/share/common-lisp/ros/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/share/gennodejs/ros/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/lib/python2.7/dist-packages/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/devel/lib/python2.7/dist-packages/simulator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/build/f1tenth/virtual/simulator/catkin_generated/installspace/simulator.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/simulator/cmake" TYPE FILE FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/build/f1tenth/virtual/simulator/catkin_generated/installspace/simulator-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/simulator/cmake" TYPE FILE FILES
    "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/build/f1tenth/virtual/simulator/catkin_generated/installspace/simulatorConfig.cmake"
    "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/build/f1tenth/virtual/simulator/catkin_generated/installspace/simulatorConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/simulator" TYPE FILE FILES "/home/ashkan/git/Deep-RL-Self-Driving-Robot/ashkan_ws/src/f1tenth/virtual/simulator/package.xml")
endif()

