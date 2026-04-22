# this is subdirectory CMakeLists.txt

# define a library from reverse.cpp and swap.cpp
# Define a library from reverse.cpp and swap.cpp
add_library(reverse_lib
            reverse.cpp
            swap.cpp
            printArray.cpp
        )
# Define the main executable
add_executable(main_lib
                main.cpp
            )

# Link the executable with the library
target_link_libraries(main_lib reverse_lib)