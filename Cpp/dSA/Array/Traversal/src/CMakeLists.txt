add_library(Traversal_lib 
            Traversal.cpp
            fetch_key.cpp
            printkey.cpp
            )

add_executable(main_lib main.cpp)

target_link_libraries(main_lib Traversal_lib)