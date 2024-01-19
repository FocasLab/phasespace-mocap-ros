<?xml version="1.0"?>
<package format="3">
  <name>phasespace_msgs</name>
  <version>0.0.0</version>
  <description>Example package for custom interfaces</description>

  <maintainer email="your_email@example.com">Your Name</maintainer>
  <license>Apache-2.0</license> <!-- Update with your package's license -->

  <buildtool_depend>ament_cmake</buildtool_depend> 
  <buildtool_depend>rosidl_default_generators</buildtool_depend>
  <depend>rclcpp</depend>
  <depend>std_msgs</depend>

  <depend>geometry_msgs</depend>  -->
  <build_depend>builtin_interfaces</build_depend>
  <build_depend>rosidl_default_generators</build_depend>
  <exec_depend>builtin_interfaces</exec_depend>
  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>

  <export>
    <!-- Other export tags can go here -->
     <build_type>ament_cmake</build_type>
  </export>
</package>
