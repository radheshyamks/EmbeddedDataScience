add_subdirectory(BookAllocator)
add_subdirectory(constructor)
add_subdirectory(isPossible)
add_subdirectory(bookAllocatorFunctor)

set(CMAKE_BUILD_TYPE Debug)

add_executable(main_lib main.cpp)

target_link_libraries(main_lib PRIVATE constructor_lib BookAllocator_lib isPossible_lib bookAllocatorFunctor_lib)

target_compile_options(main_lib PRIVATE -O0 -g)