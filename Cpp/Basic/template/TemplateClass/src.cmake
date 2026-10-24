include_guard()
cmake_policy(SET CMP0074 NEW)
# add_compile_definitions(
#     PROJECT_NAME="${PROJECT_NAME}"
#     PROJECT_VERSION="${PROJECT_VERSION}"
#     PROJECT_DESCRIPTION="${PROJECT_DESCRIPTION}"
#     PROJECT_HOMEPAGE_URL="${PROJECT_HOMEPAGE_URL}"
# )
add_compile_options(
    -Wall
    -Wextra
    -Wpedantic
    -Werror
)
# add_definitions(
#     -DPROJECT_NAME="${PROJECT_NAME}"
#     -DPROJECT_VERSION="${PROJECT_VERSION}"
#     -DPROJECT_DESCRIPTION="${PROJECT_DESCRIPTION}"
#     -DPROJECT_HOMEPAGE_URL="${PROJECT_HOMEPAGE_URL}"
# )
# add_dependencies(
#     ${PROJECT_NAME}
# )
# add_custom_command(
#     TARGET ${PROJECT_NAME}
#     POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#         $<TARGET_FILE:${PROJECT_NAME}>
#         ${CMAKE_BINARY_DIR}/bin/$<CONFIG>/
# )
# add_custom_target(
#     run_${PROJECT_NAME}
#     COMMAND ${CMAKE_COMMAND} -E echo "Running ${PROJECT_NAME}..."
#     COMMAND ${CMAKE_COMMAND} -E env
#         $<TARGET_FILE:${PROJECT_NAME}>
#     DEPENDS ${PROJECT_NAME}
# )
# include(CTest)
# include(GNUInstallDirs)
# install(TARGETS ${PROJECT_NAME}
#     EXPORT ${PROJECT_NAME}Targets
#     RUNTIME DESTINATION bin
#     LIBRARY DESTINATION lib
#     ARCHIVE DESTINATION lib
# )
# include(CMakePackageConfigHelpers)
# include(CMakeDependentOption)
# add_compile_definitions(
#     __ARITHMETIC__
# )
add_definitions(
    -D__ARITHMETIC__
)