#include <iostream>
#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"

#include "phasespace_msgs/phasespace_msgs/msg/cameras.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/rigids.hpp"

using namespace std::placeholders;

class PhasespaceTfVisualizationNode : public rclcpp::Node {
public:
    PhasespaceTfVisualizationNode() : Node("phasespace_tf_visualization") {
        RCLCPP_INFO(this->get_logger(), "TF Publishing started.");

        rigid_subscriber = this->create_subscription<phasespace_msgs::msg::Rigids>(
            "/phasespace/rigids", 10,
            std::bind(&PhasespaceTfVisualizationNode::poseRigidCallback, this, _1));

        camera_subscriber = this->create_subscription<phasespace_msgs::msg::Cameras>(
            "/phasespace/cameras", 10,
            std::bind(&PhasespaceTfVisualizationNode::staticCameraTf, this, _1));

        tf_broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(this);
        static_tf_broadcaster = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    }

private:
    void poseRigidCallback(const phasespace_msgs::msg::Rigids::SharedPtr msg) {
        for (const auto& rigid : msg->rigids) {
            geometry_msgs::msg::TransformStamped transformStamped;

            transformStamped.header.stamp = this->get_clock()->now();
            transformStamped.header.frame_id = "phasespace_base";
            transformStamped.child_frame_id = "robot_" + std::to_string(rigid.id);

            transformStamped.transform.translation.x = rigid.x;
            transformStamped.transform.translation.y = rigid.y;
            transformStamped.transform.translation.z = rigid.z;

            transformStamped.transform.rotation.x = rigid.qx;
            transformStamped.transform.rotation.y = rigid.qy;
            transformStamped.transform.rotation.z = rigid.qz;
            transformStamped.transform.rotation.w = rigid.qw;

            tf_broadcaster->sendTransform(transformStamped);
        }
    }

    void staticCameraTf(const phasespace_msgs::msg::Cameras::SharedPtr msg) {
        for (const auto& camera : msg->cameras) {
            geometry_msgs::msg::TransformStamped static_transformStamped;

            static_transformStamped.header.stamp = this->get_clock()->now();
            static_transformStamped.header.frame_id = "phasespace_base";
            static_transformStamped.child_frame_id = "camera_" + std::to_string(camera.id);

            static_transformStamped.transform.translation.x = camera.x;
            static_transformStamped.transform.translation.y = camera.y;
            static_transformStamped.transform.translation.z = camera.z;

            static_transformStamped.transform.rotation.x = camera.qx;
            static_transformStamped.transform.rotation.y = camera.qy;
            static_transformStamped.transform.rotation.z = camera.qz;
            static_transformStamped.transform.rotation.w = camera.qw;

            static_tf_broadcaster->sendTransform(static_transformStamped);
        }
    }

    rclcpp::Subscription<phasespace_msgs::msg::Rigids>::SharedPtr rigid_subscriber;
    rclcpp::Subscription<phasespace_msgs::msg::Cameras>::SharedPtr camera_subscriber;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster;
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_tf_broadcaster;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PhasespaceTfVisualizationNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
