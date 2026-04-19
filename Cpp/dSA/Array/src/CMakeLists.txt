# this is subdirectory CMakeLists.txt

# define a library from reverse.cpp and swap.cpp
# Define a library from reverse.cpp and swap.cpp
add_library(reverse_lib
            reverse.cpp
            swap.cpp
            printArray.cpp
        )
# Define the main executable
add_executable(array_lib
                array.cpp
            )

# Link the executable with the library
target_link_libraries(array_lib reverse_lib)