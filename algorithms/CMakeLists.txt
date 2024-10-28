
cmake_minimum_required(VERSION 3.10)
project(algorithms)


add_subdirectory(libs/random-array)
add_subdirectory(libs/searching-algorithms)
add_subdirectory(libs/sorting-algorithms)
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE random-array searching-algorithms sorting-algorithms)
