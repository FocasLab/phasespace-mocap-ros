# ROS Support for Phasespace Mocap System

## Usage
1. Clone the repository in your catkin workspace
```
cd ~/catkin_ws/src/
git clone https://github.com/FocasLab/phasespace-mocap-ros.git
```
2. Build the packages
```
catkin_make 
# or
catkin build
```
3. Launching the mocap system
```
roslaunch phasespace_bringup phasespace_mocap.launch server_ip:="<your_mocap_ip>"
```
