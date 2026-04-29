add_library(
            bookAllocatorFunctor_lib
            bookAllocatorFunctor.cpp
)

target_include_directories(bookAllocatorFunctor_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)