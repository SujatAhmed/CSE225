
cmake_minimum_required(VERSION 3.10)
project(data-structures)



add_subdirectory(lib)
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE lib)
