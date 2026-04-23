cmake_minimum_required(VERSION 3.10.0)

project(AppConstructor
        VERSION 1.0.0
        DESCRIPTION "A Simple program for All type of Constructor and Assignment operator"
        LANGUAGES CXX
)
# include header globally
include_directories(${CMAKE_SOURCE_DIR}/header)
# add the src directory
add_subdirectory(${CMAKE_SOURCE_DIR}/src)