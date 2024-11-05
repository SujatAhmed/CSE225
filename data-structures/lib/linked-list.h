
#include <iostream>
class LinkedList{
	
public:
	struct Node{
		int data;
		Node *next;
		Node(int value){
			data = value;
			next = NULL;
		}
	};
	Node *head;

	LinkedList();


	~LinkedList();

	void pushback(int value);

	void pushfront(int value);
	
	void search(int value);

	void popback();

	void popfront();

	void printList();

};
