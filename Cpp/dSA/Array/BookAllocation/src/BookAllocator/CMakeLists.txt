add_library(
            BookAllocator_lib
            BookAllocator.cpp
            printArray.cpp
)

target_include_directories(BookAllocator_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)