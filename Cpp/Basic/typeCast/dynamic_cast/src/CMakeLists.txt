add_library(
    dynamicLib
    dynamic_cast.cpp
)

target_include_directories(
    dynamicLib
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/inc
    ${CMAKE_SOURCE_DIR}/types
)