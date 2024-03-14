cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

include_directories("include")

project(game)
set(game_files src/main.cpp) #Many cpp files are here
add_executable(run ${game_files})