cmake_minimum_required(VERSION 3.0)

project(code_snippet)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-fcoroutines")

aux_source_directory(. src_dir)

add_executable(main ${src_dir})

target_link_libraries(main)