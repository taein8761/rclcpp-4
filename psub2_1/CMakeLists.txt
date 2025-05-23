cmake_minimum_required(VERSION 3.16)
project(psub2_1)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Compiler warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Include header files
include_directories(include)

# Publisher node
add_executable(pub
  src/pub.cpp
  src/pmain.cpp
)
ament_target_dependencies(pub rclcpp std_msgs)

# Subscriber node
add_executable(sub
  src/sub.cpp
  src/smain.cpp
)
ament_target_dependencies(sub rclcpp std_msgs)

# Install targets
install(TARGETS
  pub
  sub
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
