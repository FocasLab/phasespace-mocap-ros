cmake_minimum_required(VERSION 3.5)
project(phasespace_msgs)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)


# Declare ROS messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Camera.msg"
  "msg/Cameras.msg"
  "msg/Marker.msg"
  "msg/Markers.msg"
  "msg/Rigid.msg"
  "msg/Rigids.msg"
  DEPENDENCIES std_msgs geometry_msgs builtin_interfaces
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime std_msgs geometry_msgs builtin_interfaces)


ament_package()
