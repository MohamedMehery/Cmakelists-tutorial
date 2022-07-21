cmake_minimum_required(VERSION 3.20.4)

#generate lib file, file.lib or file.a or file.os for linux
add_library(wifi_lib
            lib.cpp
            lib.hpp)        

message(STATUS "Hello from lib")
message(STATUS "CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}") #path of parent cmake file
message(STATUS "CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}") #path of current (parent or child) cmake file
