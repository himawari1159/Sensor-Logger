cmake_minimum_required(VERSION 3.31)
project(SensorLogger)

set(CMAKE_CXX_STANDARD 20)

add_executable(SensorLogger src/main.cpp
        include/Sensor.hpp
        include/Logger.hpp
        src/Sensor.cpp
        src/Logger.cpp)
