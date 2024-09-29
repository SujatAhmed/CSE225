#include "linear-search.h"
#include "binary-search.h"
#include "random-array.h"
#include <iostream>
using namespace std;

int main() {
  int size = 10;
  int min_value = 1;
  int max_value = 100;

  const vector<int> array = generate_random_array(size, min_value, max_value);
  binarySearch(array,10);
  

  for (int val : array) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
