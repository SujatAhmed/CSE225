
#include <iostream>
int main() {
    //2D array
    //Assigning the column array that will hold the starting address for each row array
    int** ptr = new int*[4];

    //Allocating memory for the row arrays
    ptr[0] = new int[3];
    ptr[1] = new int[5];
    ptr[2] = new int[2];
    ptr[3] = new int[3];

    ptr[0][1] = 10;
    std::cout << ptr[0][1] << std::endl;
}

