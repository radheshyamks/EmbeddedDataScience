cmake_minimum_required(VERSION 3.10)
project(
    structApp
    VERSION 1.0.0
    DESCRIPTION "structApp"
    LANGUAGES CXX C
)
cmake_policy(SET CMP0074 NEW)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_definitions(
    _CRT_SECURE_NO_WARNINGS
    _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
)
add_compile_options(
    -Wall
    -Wextra
    -Wpedantic
    -Werror
)
# add_compile_definitions()
set(SOURCES
    src.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
