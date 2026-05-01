add_library(
    maxGapStall_lib
    maxGapStall.cpp
)

target_include_directories(maxGapStall_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)