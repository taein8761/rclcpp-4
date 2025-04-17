#ifndef _SUB2_2_HPP_
#define _SUB2_2_HPP_

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include <functional>
#include <memory>

using std::placeholders::_1;

class Sub2_2 : public rclcpp::Node
{
private:
    rclcpp::Subscription<geometry_msgs::msg::Vector3>::SharedPtr sub_;
    void subscribe_msg(const geometry_msgs::msg::Vector3::SharedPtr msg) const;

public:
    Sub2_2();
};

#endif //_SUB2_2_HPP_
