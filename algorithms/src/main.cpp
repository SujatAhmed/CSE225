#include "random-array.h"
#include <iostream>

int main() {
    int size = 10;
    int min_value = 1;
    int max_value = 100;
    
    std::vector<int> array = generate_random_array(size, min_value, max_value);

    std::cout << "Random Array: ";
    for (int val : array) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

