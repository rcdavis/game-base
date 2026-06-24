cmake_minimum_required(VERSION 3.14)

project(GameBase VERSION 1.0.0 LANGUAGES CXX)

include(cmake/dependencies.cmake)

add_subdirectory(Engine)
add_subdirectory(Game)
