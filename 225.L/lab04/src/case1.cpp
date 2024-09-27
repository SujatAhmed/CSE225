#include <iostream>


int main() {

    int *ptr = new int;
    *ptr = 10;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    delete ptr;
    std::cout << *ptr << std::endl;
}


