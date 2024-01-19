cmake_minimum_required(VERSION 3.5)
project(phasespace_bringup)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(phasespace_msgs REQUIRED)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/../../install/phasespace_msgs/include
)

# Linking directories, adjust if necessary
link_directories(lib)




# Explicitly set the path to the shared library
set(LIBOWL_PATH "${CMAKE_CURRENT_SOURCE_DIR}/lib/libowlsock.so")

# Adding owlsock library
add_library(owlsock SHARED IMPORTED)
set_target_properties(owlsock PROPERTIES IMPORTED_LOCATION ${LIBOWL_PATH})


# Declare a C++ executable for phasespace_bringup_node
add_executable(phasespace_bringup_node src/phasespace_bringup_node.cpp)
ament_target_dependencies(phasespace_bringup_node
  rclcpp std_msgs geometry_msgs tf2 tf2_ros phasespace_msgs
)
target_link_libraries(phasespace_bringup_node owlsock)

# Set RPATH
set_target_properties(phasespace_bringup_node PROPERTIES
  INSTALL_RPATH "$ORIGIN/../lib"
)
set_target_properties(phasespace_bringup_node PROPERTIES
  INSTALL_RPATH "$ORIGIN/../lib"
)



# Declare a C++ executable for phasespace_tf_visualization
add_executable(phasespace_tf_visualization src/phasespace_tf_visualization.cpp)
ament_target_dependencies(phasespace_tf_visualization
  rclcpp std_msgs geometry_msgs tf2 tf2_ros phasespace_msgs
)
target_link_libraries(phasespace_tf_visualization owlsock)

# Set RPATH
set_target_properties(phasespace_tf_visualization PROPERTIES
  INSTALL_RPATH "$ORIGIN/../lib"
)

# Install targets
install(TARGETS
  phasespace_bringup_node
  phasespace_tf_visualization
  DESTINATION lib/${PROJECT_NAME}
)


# Install launch directory
install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

# Export dependencies
ament_export_dependencies(rclcpp std_msgs geometry_msgs tf2 tf2_ros phasespace_msgs)

ament_package()
