cmake_minimum_required(VERSION 3.10.0)

project(AggressiveCow
        VERSION 1.0.0
        DESCRIPTION "A Simple program for AggressiveCow"
        LANGUAGES CXX
        )
# this command will include header folder
include_directories(${CMAKE_SOURCE_DIR}/header)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)