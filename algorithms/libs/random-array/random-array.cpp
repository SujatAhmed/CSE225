#include "random-array.h"
#include <cstdlib>
#include <ctime>

int* generate_random_array(int max_size, int min_value, int max_value) {
    int* array = new int[max_size]; // Allocate memory for the array
    std::srand(std::time(nullptr)); // Seed the random number generator

    for (int i = 0; i < max_size; ++i) {
        array[i] = min_value + std::rand() % (max_value - min_value + 1);
    }

    return array;
}
