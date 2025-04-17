#ifndef _PUB2_2_HPP_
#define _PUB2_2_HPP_

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include <memory>
#include <chrono>

using namespace std::chrono_literals;

class Pub2_2 : public rclcpp::Node
{
private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Vector3>::SharedPtr pub_;
    double x_, y_, z_;
    void publish_msg();

public:
    Pub2_2();
};

#endif //_PUB2_2_HPP_
