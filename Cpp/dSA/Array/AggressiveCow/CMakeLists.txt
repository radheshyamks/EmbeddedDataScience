cmake_minimum_required(VERSION 3.10.0)

project(
        AggresiveCow
        VERSION 1.0.0
        DESCRIPTION "Aggressive Cow program"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
# include(${CMAKE_SOURCE_DIR}/file.cmake)
include_directories(${CMAKE_SOURCE_DIR}/header)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)