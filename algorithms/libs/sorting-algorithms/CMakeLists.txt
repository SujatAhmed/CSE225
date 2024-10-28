add_library(sorting-algorithms STATIC  bubble-sort.cpp insertion-sort.cpp merge-sort.cpp quick-sort.cpp selection-sort.cpp )

target_include_directories(sorting-algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
