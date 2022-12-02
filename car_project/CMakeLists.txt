cmake_minimum_required(VERSION 3.21)
project(Car)

set(CMAKE_CXX_STANDARD 14)

add_executable(Car main.cpp movement.h carBody.cpp carBody.h ariaCar.cpp ariaCar.h aria100.cpp aria100.h ariaMovement.cpp ariaMovement.h manager.cpp manager.h DB_Manager.cpp DB_Manager.h Login_Manager.cpp Login_Manager.h)
