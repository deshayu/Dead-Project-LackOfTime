cmake_minimum_required(VERSION 3.0.0)
project(sdl_tower VERSION 0.0.1)

# Directories
add_subdirectory(src)
# Headers
target_include_directories(sdl_tower PRIVATE include/)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
