cmake_minimum_required(VERSION 3.0.0)

# Directories
add_subdirectory("Entities")

# Add source to this project's executable.
add_executable(SDL_Tower main.cpp GameManager.cpp Graphics.cpp Timer.cpp)

target_link_libraries(SDL_Tower SDL2main SDL2)