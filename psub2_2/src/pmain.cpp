#include "psub2_2/pub.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Pub2_2>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
