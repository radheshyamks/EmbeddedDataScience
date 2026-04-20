cmake_minimum_required(VERSION 3.10.0)

project(ArrayTraverse
        VERSION 1.0.0
        DESCRIPTION "A Simple Array Traversal Program"
        LANGUAGES CXX
    )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#including header files
include_directories(${CMAKE_SOURCE_DIR}/header)

#including source file in subdirectory
add_subdirectory(${CMAKE_SOURCE_DIR}/src)