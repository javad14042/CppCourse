cmake_minimum_required(VERSION 3.21)
project(address)

set(CMAKE_CXX_STANDARD 14)

add_executable(address main.cpp address.cpp address.h hostname.cpp hostname.h subnet.cpp subnet.h address_manager.cpp address_manager.h)
