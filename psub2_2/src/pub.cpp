#include "psub2_2/pub.hpp"

Pub2_2::Pub2_2() : Node("vector3_publisher"), x_(0.0), y_(0.0), z_(0.0)
{
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    pub_ = this->create_publisher<geometry_msgs::msg::Vector3>("vector_topic", qos_profile);
    timer_ = this->create_wall_timer(1s, std::bind(&Pub2_2::publish_msg, this));
}

void Pub2_2::publish_msg()
{
    auto msg = geometry_msgs::msg::Vector3();
    msg.x = x_++;
    msg.y = y_++;
    msg.z = z_++;
    RCLCPP_INFO(this->get_logger(), "Publishing: x=%.1f y=%.1f z=%.1f", msg.x, msg.y, msg.z);
    pub_->publish(msg);
}
