cmake_minimum_required(VERSION 3.10.0)

project(
        PainterPArtition
        VERSION 1.0.0
        DESCRIPTION "Apinter partition program"
        LANGUAGES CXX
    )

include_directories(${CMAKE_SOURCE_DIR}/header)
# include()
add_subdirectory(${CMAKE_SOURCE_DIR}/src)