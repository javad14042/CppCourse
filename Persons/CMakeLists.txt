cmake_minimum_required(VERSION 3.21)
project(Persons)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shapes main.cpp person.cpp person.h customer.cpp customer.h admin.cpp admin.h account.cpp account.h)
