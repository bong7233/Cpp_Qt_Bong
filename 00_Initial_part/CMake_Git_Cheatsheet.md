# CMakelist 사용법 정리

## 1. CMakeLists.txt 실무 요약 문서

### 템플릿 A: 단일 실행 파일에 여러 소스 추가 (기초 단계)
강의나 프로젝트 규모가 커져서 `.cpp` 파일이 늘어날 때 사용하는 기본 구조

```cmake
cmake_minimum_required(VERSION 3.16)
project(RobotProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 소스 파일들을 변수(SRC_FILES)에 그룹화하여 관리 (유지보수가 편해짐)
set(SRC_FILES
    main.cpp
    src/robot_control.cpp
    src/sensor_parser.cpp
)

# 실행 파일 생성 시 변수를 투입
add_executable(robot_app ${SRC_FILES})

# 헤더 파일 폴더 경로 명시
target_include_directories(robot_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)