add_library(
    printArray_lib
    printArray.cpp
)

target_include_directories(printArray_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)