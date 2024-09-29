
add_library(searching-algorithms STATIC linear-search.cpp binary-search.cpp)

target_include_directories(searching-algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
