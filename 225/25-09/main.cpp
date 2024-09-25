#include <iostream>
//linked list
struct Node{
    int key;
    Node* next;
};

void pointer();
void list();
int main() {
    //pointer();
	struct Node* firstNode = (Node *) malloc(sizeof (struct Node));
	firstNode -> key = 100;
	firstNode -> next = NULL;

	struct Node* secondNode = (Node *) malloc(sizeof (struct Node));
	secondNode -> key = 120;
	secondNode -> next = NULL;

	struct Node* head = firstNode;
	firstNode -> next = secondNode;

    std::cout << firstNode -> key << std::endl;


	std::cout << "Value of first Node" << firstNode -> key << std::endl;
	std::cout << "Value of the next of first Node" << firstNode -> next<< std::endl;
	std::cout << "Address of the second Node" << secondNode<< std::endl;
	std::cout << "Value of the second Node" << firstNode -> next -> key<< std::ndl;
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



