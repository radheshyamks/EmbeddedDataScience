cmake_minimum_required(VERSION 3.10)
project(
    staticApp
    VERSION 1.0
    DESCRIPTION "static_cast example"
    LANGUAGES CXX C
)
set(CMAKE_CXX_STANDARD 11)
set(
    SOURCE
    main.cpp
    static_cast.cpp
)
add_library(
    StaticLib
    STATIC
    static_cast.cpp
)
add_executable(
    mainLib
    main.cpp
)
target_link_libraries(
    mainLib
    StaticLib
)