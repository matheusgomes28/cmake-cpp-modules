cmake_minimum_required(VERSION 3.25)
project(CppModules LANGUAGES CXX)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")

set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS Off)


add_subdirectory(src/my_lib)
add_subdirectory(src/my_bin)
