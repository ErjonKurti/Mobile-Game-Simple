cmake_minimum_required(VERSION 3.10)
project(Game)

set(CMAKE_CXX_STANDARD 17)

# Path to SFML (adjust according to your directory structure)
set(SFML_DIR "C:\Program Files\SFML-2.6.1")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

include_directories(${SFML_INCLUDE_DIR})

add_executable(Game
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
    src/Platform.cpp
)

target_link_libraries(Game sfml-graphics sfml-window sfml-system)
