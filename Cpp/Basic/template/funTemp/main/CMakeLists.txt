add_executable(
    mainLib
    main.cpp
)
target_include_directories(mainLib PUBLIC ${CMAKE_SOURCE_DIR}/inc)
target_include_directories(mainLib PUBLIC ${CMAKE_SOURCE_DIR}/type)