cmake_minimum_required(VERSION 3.22)
project(project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project
        account.cpp
        account.h
        main.cpp
        management.cpp
        management.h taxi.cpp taxi.h food.cpp food.h movie.cpp movie.h movies.cpp movies.h onlineTv.cpp onlineTv.h)
