cmake_minimum_required(VERSION 3.17)
project(Ex2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ex2 TestCounter.cpp Direction.hpp
        doctest.h Demo.cpp Board.cpp Board.hpp Test.cpp)