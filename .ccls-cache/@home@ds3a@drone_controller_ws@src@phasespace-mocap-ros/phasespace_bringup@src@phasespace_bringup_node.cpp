#include <iostream>
#include <string>
#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "phasespace_bringup/owl.hpp"

#include "phasespace_msgs/phasespace_msgs/msg/camera.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/cameras.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/marker.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/markers.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/rigid.hpp"
#include "phasespace_msgs/phasespace_msgs/msg/rigids.hpp"
using namespace std::chrono_literals;

class PhasespaceBringupNode : public rclcpp::Node
{
public:
    PhasespaceBringupNode()
        : Node("phasespace_bringup")
    {
        owl = std::make_shared<OWL::Context>();
        cameras = std::make_shared<OWL::Cameras>();
        markers = std::make_shared<OWL::Markers>();
        rigids = std::make_shared<OWL::Rigids>();

        errors_pub = this->create_publisher<std_msgs::msg::String>("/phasespace/errors", 10);
        cameras_pub = this->create_publisher<phasespace_msgs::msg::Cameras>("/phasespace/cameras", 10);
        markers_pub = this->create_publisher<phasespace_msgs::msg::Markers>("/phasespace/markers", 10);
        rigids_pub = this->create_publisher<phasespace_msgs::msg::Rigids>("/phasespace/rigids", 10);

        std::string address;
        this->declare_parameter<std::string>("server_ip", "192.168.1.230");
        this->get_parameter("server_ip", address);
        RCLCPP_INFO(this->get_logger(), "Opening port at: %s", address.c_str());

        if (owl->open(address) <= 0 || owl->initialize("timebase=1,1000000") <= 0) {
            RCLCPP_ERROR(this->get_logger(), "Connection failed!!");
            rclcpp::shutdown();
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Starting streaming...");
        owl->streaming(1);

        timer_ = this->create_wall_timer(1ms, std::bind(&PhasespaceBringupNode::mainLoop, this));
    }

private:
    void mainLoop()
    {
        if (!owl->isOpen() || !owl->property<int>("initialized"))
            return;

        const OWL::Event *event = owl->nextEvent(1000);

        if (!event)
            return;

        if (event->type_id() == OWL::Type::ERROR) {
            std_msgs::msg::String str;
            str.data = event->str();
            RCLCPP_ERROR(this->get_logger(), "Error: %s", event->str().c_str());
            errors_pub->publish(str);
        }
        else if(event->type_id() == OWL::Type::CAMERA) {
            if (event->name() == std::string("cameras") && event->get(*cameras) > 0) {
                phasespace_msgs::msg::Cameras out;
                for (const auto& c : *cameras) {
                    phasespace_msgs::msg::Camera cout;
                    cout.id = c.id;
                    cout.flags = c.flags;
                    cout.cond = c.cond;
                    cout.x = c.pose[0] / 1000;
                    cout.y = -c.pose[2] / 1000;
                    cout.z = c.pose[1] / 1000;
                    cout.qw = c.pose[3];
                    cout.qx = c.pose[4];
                    cout.qy = c.pose[6];
                    cout.qz = c.pose[5];
                    out.cameras.push_back(cout);
                }
                cameras_pub->publish(out); 
            }
        }
        else if (event->type_id() == OWL::Type::FRAME) {
            if (event->find("markers", *markers) > 0) {
                phasespace_msgs::msg::Markers out;
                for (const auto& m : *markers) {
                    phasespace_msgs::msg::Marker mout;
                    mout.id = m.id;
                    mout.time = m.time;
                    mout.flags = m.flags;
                    mout.cond = m.cond;
                    mout.x = m.x / 1000;
                    mout.y = m.z / 1000;
                    mout.z = m.y / 1000;
                    out.markers.push_back(mout);
                }
                markers_pub->publish(out);
            }

            if (event->find("rigids", *rigids) > 0) {
                phasespace_msgs::msg::Rigids out;
                for (const auto& r : *rigids) {
                    phasespace_msgs::msg::Rigid rout;
                    rout.id = r.id;
                    rout.time = r.time;
                    rout.flags = r.flags;
                    rout.cond = r.cond;
                    rout.x = r.pose[0] / 1000;
                    rout.y = -r.pose[2] / 1000;
                    rout.z = r.pose[1] / 1000;
                    rout.qw = r.pose[3];
                    rout.qx = r.pose[4];
                    rout.qy = -r.pose[6];
                    rout.qz = r.pose[5];
                    out.rigids.push_back(rout);
                }
                rigids_pub->publish(out);
            }
        }
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr errors_pub;
    rclcpp::Publisher<phasespace_msgs::msg::Cameras>::SharedPtr cameras_pub;
    rclcpp::Publisher<phasespace_msgs::msg::Markers>::SharedPtr markers_pub;
    rclcpp::Publisher<phasespace_msgs::msg::Rigids>::SharedPtr rigids_pub;

    std::shared_ptr<OWL::Context> owl;
    std::shared_ptr<OWL::Cameras> cameras;
    std::shared_ptr<OWL::Markers> markers;
    std::shared_ptr<OWL::Rigids> rigids;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PhasespaceBringupNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
