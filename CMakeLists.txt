cmake_minimum_required(VERSION 3.19.2)
project(cpp)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp M_00/ex02/tests.cpp
                   M_00/ex02/Account.cpp)
