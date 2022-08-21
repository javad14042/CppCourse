cmake_minimum_required(VERSION 3.21)
project(matrix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(matrix
        info.cpp
        info.h
        main.cpp)
