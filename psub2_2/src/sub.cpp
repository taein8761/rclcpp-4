#include "psub2_2/sub.hpp"

Sub2_2::Sub2_2() : Node("vector3_subscriber")
{
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    sub_ = this->create_subscription<geometry_msgs::msg::Vector3>(
        "vector_topic", qos_profile, std::bind(&Sub2_2::subscribe_msg, this, _1));
}

void Sub2_2::subscribe_msg(const geometry_msgs::msg::Vector3::SharedPtr msg) const
{
    RCLCPP_INFO(this->get_logger(), "Received: x=%.1f y=%.1f z=%.1f", msg->x, msg->y, msg->z);
}
