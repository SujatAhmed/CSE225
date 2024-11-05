
#include "linked-list.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() { head = NULL; }

LinkedList::~LinkedList() {
  Node *current = head;
  while (current != NULL) {
    Node *nextNode = current->next;
    delete current;
    current = nextNode;
  }
}

void LinkedList::pushfront(int value) {

  Node *newNode = new Node(value);
  if (head == NULL) {
    head = newNode;
  } else {
    newNode->next = head;
    head = newNode;
  }
	printList();
}

void LinkedList::pushback(int value) {
  Node *newNode = new Node(value);
  Node *current = head;

  if (head == NULL) {
    head = newNode;
    return;
  }


  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
	printList();
}

void LinkedList::popfront() {
  if (head == NULL) {
    cout << "the list is empty" << endl;
    return;
  }
  Node *temp = head;
  head = head->next;
  delete temp;
	printList();
}
void LinkedList::popback() {
  if (head == NULL) {
    cout << "the list is empty" << endl;
    return;
  }
  if (head->next == NULL) {
    delete head;
    head = NULL;
    return;
  }
  Node *current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }
  delete current->next;
  current->next = NULL;
	printList();
}

void LinkedList::printList() {
  if (head == NULL) {
    cout << "the list is empty" << endl;
    return;
  }
  Node *current = head;
  while (current->next != NULL) {
    cout << current->data << "->";
    current = current->next;
		
  }
  cout<< current->data << "->nullptr" << endl;
}
