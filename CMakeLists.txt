cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

include_directories("include")
include_directories("units")
include_directories("view")

project(game)
set(game_files src/main.cpp src/view.cpp src/control.cpp) #Many cpp files are here
add_executable(run ${game_files})