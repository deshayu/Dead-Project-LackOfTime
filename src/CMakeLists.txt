cmake_minimum_required(VERSION 3.0.0)
project(SDL_Tower_exe VERSION 0.0.1)

# Directories
add_subdirectory(Entities)

set(SDL_Tower_exe_source_files main.cpp GameManager.cpp Graphics.cpp Timer.cpp)
add_executable(SDL_Tower_exe ${SDL_Tower_exe_source_files})

target_link_libraries(SDL_Tower_exe SDL2main SDL2)