add_library(
            constructor_lib 
            constructor.cpp
        )
target_include_directories(constructor_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)