#include "linked-list.h"
#include "queue.h"
#include "stack.h"
#include "tree.h"
#include <iostream>
using namespace std;


int f(int x, int *py, int **ppz) {
  int y, z;
  **ppz += 1;
  z = **ppz;
  *py += 2;
  y = *py;
  x += 3;
  return x + y + z;
}
int main() {
  int c, *b, **a;
  c = 4;
  b = &c;
  a = &b;
  cout << f(c, b, a) << endl;
  return 0;
}
