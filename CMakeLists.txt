cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(store LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CSS_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(store item.cpp)