cmake_minimum_required(VERSION 3.19.2)
project(cpp)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp M_00/ex01/main.cpp
                   M_00/ex01/Contact.cpp
                   M_00/ex01/PhoneBook.cpp)
