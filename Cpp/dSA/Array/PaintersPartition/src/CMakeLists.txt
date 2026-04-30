# isPossible
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/isPossible)
# PainterPArtition_Functor
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/PainterPArtition_Functor)
# constructor
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/constructor)
# printArray
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/printArray)
# painterpartition_allocator
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/painterpartition_allocator)


set(
    MAIN_SOURCE
    main.cpp
)
add_executable(
                main_lib 
                ${MAIN_SOURCE}
            )
# sequence matters here
target_link_libraries(main_lib painterpartition_allocator_lib PainterPArtition_Functor_lib isPossible_lib constructor_lib printArray_lib)