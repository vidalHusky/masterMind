cmake_minimum_required(VERSION 3.20)
project(projectMastermind)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(projectMastermind
        Code.cpp
        Code.h
        main.cpp
        Mastermind.cpp
        Mastermind.h
        Response.cpp
        Response.h)