cmake_minimum_required(VERSION 3.16)
project(psub2_2)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Enable warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include)

# Publisher node
add_executable(pub
  src/pub.cpp
  src/pmain.cpp
)
ament_target_dependencies(pub
  rclcpp
  geometry_msgs
)

# Subscriber node
add_executable(sub
  src/sub.cpp
  src/smain.cpp
)
ament_target_dependencies(sub
  rclcpp
  geometry_msgs
)

# Installation
install(TARGETS
  pub
  sub
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
