#ifndef RANDOM_ARRAY_H
#define RANDOM_ARRAY_H


#include <cstdlib>  // For std::srand and std::rand
#include <ctime>    // For std::time

int* generate_random_array(int max_size, int min_value, int max_value);

#endif

