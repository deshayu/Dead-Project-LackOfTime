cmake_minimum_required(VERSION 3.0.0)
project(sdl_tower_exe)

set(sdl_tower_source_files main.cpp GameManager.cpp Graphics.cpp)
add_executable(sdl_tower ${sdl_tower_source_files})

target_link_libraries(sdl_tower SDL2main SDL2)