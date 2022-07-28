cmake_minimum_required(VERSION 3.20.5)
project(gtst CXX)
set(CMAKE_CXX_COMPILER g++ CACHE STRING "Cpp Compiler" FORCE)
set(SRCS ./gtst.cpp) 

add_executable(${PROJECT_NAME} ${SRCS})

set(CMAKE_PREFIX_PATH "C:/Users/Mohamed Mehery/Downloads/Compressed/googletest/build")
target_link_libraries(gtst PUBLIC gtest)
target_link_libraries(gtst PUBLIC gtest_main)
target_link_libraries(gtst PUBLIC gmock)
target_link_libraries(gtst PUBLIC gmock_main)