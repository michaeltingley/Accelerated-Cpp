cmake_minimum_required(VERSION 3.5)
project(Accelerated_Cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp median.cpp median.h StudentInfo.h StudentInfo.cpp strings.cpp strings.h)
add_executable(Accelerated_Cpp ${SOURCE_FILES})