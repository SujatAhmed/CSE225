#include "random-array.h"
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<int> generate_random_array(int size, int min_value, int max_value) {
    std::vector<int> array(size);
    std::srand(std::time(nullptr)); // Seed random number generator
    for (int &val : array) {
        val = min_value + std::rand() % (max_value - min_value + 1);
    }
    return array;
}

