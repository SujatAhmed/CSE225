add_library(lib STATIC linked-list.cpp tree.cpp stack.cpp queue.cpp)
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
