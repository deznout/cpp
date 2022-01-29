cmake_minimum_required(VERSION 3.21)
project(M_03)

set(CMAKE_CXX_STANDARD 98)

add_executable(M_03 ex03/main.cpp
                ex03/ClapTrap.cpp
                ex03/ScavTrap.cpp
                ex03/FragTrap.cpp
             ex03/DiamondTrap.cpp)
