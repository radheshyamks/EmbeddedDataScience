# added subdirectory
add_subdirectory(CopyAssignment)
add_subdirectory(copyConstructor)
add_subdirectory(default)
add_subdirectory(MoveAssignment)
add_subdirectory(MoveConstructor)
add_subdirectory(parametrized)

add_executable(main_lib main.cpp)

# Link against all sub-directory
target_link_libraries(main_lib PRIVATE CopyAssignment_lib copyConstructor_lib default_lib MoveAssignment_lib 
                      MoveConstructor_lib parametrized_lib
)