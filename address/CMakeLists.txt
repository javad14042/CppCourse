cmake_minimum_required(VERSION 3.22)
project(address)

set(CMAKE_CXX_STANDARD 14)

add_executable(address main.cpp address.cpp address.h hostname.cpp hostname.h subnet.cpp subnet.h)
