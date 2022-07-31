cmake_minimum_required(VERSION 3.20.5)
project(gtst CXX)
set(GTEST_SRCS ./gtst.cpp) 
set(GMOCK_SRCS ./gmktest.cpp)
set(CMAKE_CXX_COMPILE g++ CACHE STRING "Cpp compiler" FORCE)
set(CMAKE_CXX_STANDARD 14)

add_executable(gmk ${GMOCK_SRCS})

add_executable(gtst ${GTEST_SRCS})
message(STATUS ${CMAKE_CXX_COMPILER_VERSION})


set(CMAKE_PREFIX_PATH "C:/Users/Mohamed Mehery/Downloads/Compressed/googletest/build")


target_link_libraries(gmk PRIVATE gtest)
target_link_libraries(gmk PRIVATE gtest_main)
target_link_libraries(gmk PRIVATE gmock)
target_link_libraries(gmk PRIVATE gmock_main)

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -pthread")


target_link_libraries(gtst PRIVATE gtest)
target_link_libraries(gtst PRIVATE gtest_main)
target_link_libraries(gtst PRIVATE gmock)
target_link_libraries(gtst PRIVATE gmock_main)