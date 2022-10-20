cmake_minimum_required(VERSION 3.21)
project(Car)

set(CMAKE_CXX_STANDARD 14)

add_executable(Car main.cpp movement.cpp movement.h carBody.cpp carBody.h ariaCar.cpp ariaCar.h aria100.cpp aria100.h)
