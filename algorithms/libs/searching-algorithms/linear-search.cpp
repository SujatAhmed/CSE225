
#include "linear-search.h"
#include <vector>
using namespace std;

// Function to perform linear search on a vector
int linearSearch(const std::vector<int>& arr, int target) {
  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] == target) {
      return i;  // Return the index where the element is found
    }
  }
  return -1;  // Return -1 if the element is not found
}

