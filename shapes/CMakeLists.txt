cmake_minimum_required(VERSION 3.21)
project(shapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(shapes main.cpp shapes.cpp shapes.h circle.cpp circle.h rectangle.cpp rectangle.h regularPolygon.cpp regularPolygon.h triangle.cpp triangle.h square.cpp square.h)
