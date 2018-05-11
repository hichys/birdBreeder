cmake_minimum_required(VERSION 3.10)
project(birdbreeder)

set(CMAKE_CXX_STANDARD 17)

add_executable(birdbreeder src/main.cpp include/bird.h src/bird.cpp include/type.h include/status.h include/Date.hh src/Date.cpp)