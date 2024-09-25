#include <iostream>
//linked list

void pointer();
void list();
int main() {
    pointer();
}

void pointer() {
    int a = 5;
    int* p = &a;
    int** q = &p;
    int*** r  = &q;



 //    std::cout << *p << std::endl;
 //   std :: cout << **q << std::endl;
 //  std::cout << ***r << std::endl;



    int* ptr = new int[10];
    for (int i = 0; i < 10; i++) {
        *(ptr + i) = i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << *(ptr + i) << std::endl;
    }


}



