cmake_minimum_required(VERSION 3.10.0)

project(AppBinSearch
        VERSION 1.0.0
        DESCRIPTION "Simple program of Binary Search"
        LANGUAGES CXX
)

if(WIN32)
    message("This is WINDOWS platform")
    include_directories(${CMAKE_SOURCE_DIR}/header)
    add_subdirectory(${CMAKE_SOURCE_DIR}/src)
endif()