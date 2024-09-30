
#include <cstdlib>
#include <iostream>
using namespace std;
struct Node {
  int key;
  Node *next;
};

void pushFront(Node *newNode);
void pushBack(Node *newNode);

//Code won't copile, sir just used pseudo code
int main() {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->key = 40;
  newNode->next = NULL;
}
//Complexity = O(1)
void pushFront(Node *newNode) {
  newNode->next = head;
  head = newNode;
  return;
}
//Complexity = O(n)
void pushBack(Node *newNode) {

  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
	current -> next  = newNode;
}
