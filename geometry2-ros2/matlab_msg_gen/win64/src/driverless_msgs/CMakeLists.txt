cmake_minimum_required(VERSION 3.5)
project(driverless_msgs)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rosidl_typesupport_c REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package( builtin_interfaces REQUIRED)
find_package( class_loader REQUIRED)
find_package( console_bridge REQUIRED)
find_package( geometry_msgs REQUIRED)
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
find_package( std_msgs REQUIRED)
include_directories("C:/Program Files/MATLAB/R2021b/extern/include")
include_directories("C:/Program Files/MATLAB/R2021b/extern/include/MatlabDataArray")
include_directories("C:/Program Files/MATLAB/R2021b/toolbox/ros/include/ros2")
include_directories("include/driverless_msgs")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set(msg_files
  "msg/Can.msg"
  "msg/Cone.msg"
  "msg/ConeDetectionStamped.msg"
  "msg/ConeWithCovariance.msg"
  "msg/MPCCenterline.msg"
  "msg/MPCPathPoint.msg"
  "msg/MPCState.msg"
  "msg/PathPoint.msg"
  "msg/PathStamped.msg"
  "msg/RES.msg"
  "msg/Reset.msg"
  "msg/TrackDetectionStamped.msg"
)
set(srv_files
  "srv/SelectMission.srv"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES 
  builtin_interfaces
  geometry_msgs
  std_msgs
)
link_directories("C:/Program Files/MATLAB/R2021b/extern/lib/win64/microsoft")
# Library
add_library(
    driverless_msgs_matlab 
    SHARED
    src/driverless_msgs_Can_message.cpp
    src/driverless_msgs_Cone_message.cpp
    src/driverless_msgs_ConeDetectionStamped_message.cpp
    src/driverless_msgs_ConeWithCovariance_message.cpp
    src/driverless_msgs_MPCCenterline_message.cpp
    src/driverless_msgs_MPCPathPoint_message.cpp
    src/driverless_msgs_MPCState_message.cpp
    src/driverless_msgs_PathPoint_message.cpp
    src/driverless_msgs_PathStamped_message.cpp
    src/driverless_msgs_RES_message.cpp
    src/driverless_msgs_Reset_message.cpp
    src/driverless_msgs_TrackDetectionStamped_message.cpp
    src/driverless_msgs_SelectMission_service.cpp
)
target_include_directories(driverless_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( driverless_msgs_matlab
	libMatlabDataArray
	${CMAKE_DL_LIBS}
	)
ament_target_dependencies(
  driverless_msgs_matlab
  "builtin_interfaces"
  "class_loader"
  "console_bridge"
  "geometry_msgs"
  "rclcpp"
  "rcutils"
  "std_msgs"
)
rosidl_target_interfaces(
	  driverless_msgs_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(driverless_msgs_matlab PRIVATE "DRIVERLESS_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS driverless_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
ament_export_include_directories(
  include
)
ament_export_libraries(
  driverless_msgs_matlab
)
ament_package()
# Generated 05-Oct-2022 16:10:28
# Copyright 2019-2021 The MathWorks, Inc.
