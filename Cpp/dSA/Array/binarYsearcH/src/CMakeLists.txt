# set(DrMemoryPath "C:\Program Files (x86)\Dr. Memory\bin")
add_subdirectory(BinarySrchArray)
add_subdirectory(findIndex)
add_subdirectory(PrintArray)
set(CMAKE_BUILD_TYPE Debug)
add_executable(main_lib main.cpp)
target_link_libraries(main_lib
                        PRIVATE 
                        BinarySrch_lib 
                        findIndex_lib 
                        PrintArray_lib
                        )

# target_compile_options(main_lib PRIVATE -g)
target_compile_options(main_lib PRIVATE -O0 -g)
target_compile_options(BinarySrch_lib PRIVATE -O0 -g)
target_compile_options(findIndex_lib PRIVATE -O0 -g)
target_compile_options(PrintArray_lib PRIVATE -O0 -g)