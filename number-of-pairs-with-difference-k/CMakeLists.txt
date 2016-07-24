#cmake_minimum_required(VERSION 3.5)
project(Numbers_of_pairs_with_difference_k)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Numbers_of_pairs_with_difference_k ${SOURCE_FILES})