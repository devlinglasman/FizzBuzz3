cmake_minimum_required(VERSION 3.13)
project(FizzBuzz3)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

add_executable(FizzBuzz3 main.cpp Tests/FizzBuzzTests.cpp Tests/FizzBuzzTests.h Tests/test.cpp)
target_link_libraries(FizzBuzz3 gtest gtest_main)
