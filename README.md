# ROS Support for Phasespace Mocap System

## Usage
1. Clone the repository in your catkin workspace
```
cd ~/catkin_ws/src/
git clone https://github.com/jayBhagiya/phasespace-mocap-ros.git
```
2. Build the packages
``
colcon build
```
3. Launching the mocap system
```
ros2 launch phasespace_bringup phasespace_mocap.launch server_ip:="<your_mocap_ip>"
```
