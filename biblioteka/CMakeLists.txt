cmake_minimum_required(VERSION 2.8.9)
project(simple)

SET(CMAKE_CXX_COMPILER g++)
SET(CMAKE_C_COMPILER g++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Bring the headers, such as Student.h into the project
include_directories(include)
include_directories(${PROJECT_SOURCE_DIR})

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

set(CMAKE_BUILD_TYPE Debug)

add_executable(biblioteka ${SOURCES})