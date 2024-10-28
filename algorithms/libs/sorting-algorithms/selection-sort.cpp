#include "selection-sort.h"
#include <iostream>

void selection_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    // Assume the minimum is the first element of the unsorted part
    int min_index = i;

    // Find the index of the minimum element in the unsorted part
    for (int j = i + 1; j < size; ++j) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }

    // Swap the found minimum element with the first element of the unsorted
    // part
    if (min_index != i) {      // Only swap if needed
      int temp = arr[i];       // Store the current element
      arr[i] = arr[min_index]; // Move the minimum element to the front
      arr[min_index] =
          temp; // Place the stored element in the minimum's position
    }
  }
}
