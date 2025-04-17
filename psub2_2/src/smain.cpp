#include "psub2_2/sub.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Sub2_2>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
