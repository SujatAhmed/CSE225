
cmake_minimum_required(VERSION 3.10)
project(sortin-and-searching-algorithms)


add_subdirectory(libs/random-array)
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE random-array)
