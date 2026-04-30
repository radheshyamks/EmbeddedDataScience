add_library(
    painterpartition_allocator_lib
    painterpartition_allocator.cpp
)

target_include_directories(painterpartition_allocator_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)