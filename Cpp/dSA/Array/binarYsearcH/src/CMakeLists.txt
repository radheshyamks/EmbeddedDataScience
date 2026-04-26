# set(DrMemoryPath "C:\Program Files (x86)\Dr. Memory\bin")
set(DrMemoryPath "C:/Program Files (x86)/Dr. Memory/bin/drmemory.exe")
file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/drmemory_reports")


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
# In your CMakeLists.txt
# add_executable(my_app main.cpp findIndex.cpp)

# target_compile_options(main_lib PRIVATE -g)
target_compile_options(main_lib PRIVATE -O0 -g)
target_compile_options(BinarySrch_lib PRIVATE -O0 -g)
target_compile_options(findIndex_lib PRIVATE -O0 -g)
target_compile_options(PrintArray_lib PRIVATE -O0 -g)

# # Add a custom target to run Dr. Memory
add_custom_target(run_drmemory
    COMMAND ${DrMemoryPath} -batch -exit_code_if_errors 1 
    -report -report_dir "${CMAKE_BINARY_DIR}/drmemory_reports" 
    -no_check_leaks -ignore_kernel  
    -- $<TARGET_FILE:main_lib>
    DEPENDS main_lib
    COMMENT "Running Dr. Memory on main_lib"
)