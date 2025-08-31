cmake_minimum_required(VERSION 3.31)

#Project name
project(SensorLogger)

#Use C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Include header files
include_directories(include)

#Find all .cpp files inside src/
file(GLOB SOURCES "src/*.cpp")

#Compile into an executable
add_executable(SensorLogger ${SOURCES})
