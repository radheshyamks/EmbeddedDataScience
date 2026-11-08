add_library(
    uniqPtrLib
    STATIC
    uniqPtr.cpp
)

target_include_directories(
    uniqPtrLib
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/types
)