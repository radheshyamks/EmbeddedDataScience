add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/constructor)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/isfeasible)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/maxGapStall)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/printArray)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/functor)

add_executable(
    main_lib
    main.cpp
)
target_include_directories(main_lib PUBLIC ${CMAKE_SOURCE_DIR}/header)

target_link_libraries(main_lib constructor_lib functor_lib maxGapStall_lib isfeasible_lib printArray_lib)