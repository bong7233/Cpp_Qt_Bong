# 최소 CMake 버전 설정
cmake_minimum_required(VERSION 3.16)

# 프로젝트 이름과 버전 설정
project(CppStudy VERSION 1.0 LANGUAGES CXX)

# C++17 표준 사용 설정
set(CMAKE_CXX_STANDARD 17)

# C++17 표준이 필수임을 명시 , 컴파일러가 지원하지 않으면 오류 발생
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 실행 파일 생성
add_executable(main_app main.cpp)
