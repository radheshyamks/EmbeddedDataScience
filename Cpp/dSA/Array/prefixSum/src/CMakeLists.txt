message("creating preFix Library")
add_library(prefix_lib
            prefixsum.cpp 
            printArray.cpp
)
message("Creating main library")
add_executable(main_lib main.cpp)

message("Linking main and prefix Library")
target_link_libraries(main_lib prefix_lib)