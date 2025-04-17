# rclcpp-4
1. 1번을 수정하여 타이머를 이용하여 50msec마다 정수 값을 0부
터 1씩 증가시키면서 발행하고 구독하는 패키지 psub2-1를 작성하라.
+ 토픽 메시지 인터페이스는 std_msgs/msg/Int32을 사용할 것
![스크린샷 2025-04-17 165256](https://github.com/user-attachments/assets/9284ffb8-4f38-4b3f-b739-0fe83ed150e8)


2. 1번을 수정하여 실수값 3개를 0으로 초기화하고 1초마다 1씩
증가시키면서 발행하고 구독하는 패키지 psub2-2를 작성하시오.
+ 토픽 메시지 인터페이스는 geometry_msgs/msg/Vector3을 사용.
+ 패키지 생성시 의존패키지에서 std_msgs->geometry_msgs으로 수정해야함
+ 소스파일작성시 헤더파일명과 클래스명을 수정해야함(15페이지 참고)
+ CMakeLists.txt의 add_executables 명령에서 의존 패키지를 std_msgs-> geometry_msgs으로 수정해야함
+ ![스크린샷 2025-04-17 165941](https://github.com/user-attachments/assets/f80af149-6555-48fb-9e0f-e9be50c39838)
