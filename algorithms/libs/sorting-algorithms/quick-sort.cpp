#include "quick-sort.h"
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(int *array, int low, int high) {
  int pivot = array[high]; // Choosing the last element as pivot
  int i = low - 1;         // Index of smaller element

  for (int j = low; j < high; ++j) {
    // If current element is smaller than or equal to pivot
    if (array[j] <= pivot) {
      i++; // Increment index of smaller element
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[high]); // Place pivot in the correct position
  return i + 1;                    // Return the index of the pivot
}

void quick_sort(int *array, int low, int high) {
  if (low < high) {
    // Partitioning the array
    int pivot_index = partition(array, low, high);

    // Recursively sorting the elements before and after partition
    quick_sort(array, low, pivot_index - 1);
    quick_sort(array, pivot_index + 1, high);
  }
}
