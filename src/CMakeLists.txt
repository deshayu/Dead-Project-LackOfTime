cmake_minimum_required(VERSION 3.0.0)

# Add source to this project's executable.
add_executable(SDL_Tower main.cpp GameManager.cpp Graphics.cpp Timer.cpp GameEntity.cpp)

target_include_directories(SDL_Tower PRIVATE ../include/Entities)

target_link_libraries(SDL_Tower SDL2main SDL2)