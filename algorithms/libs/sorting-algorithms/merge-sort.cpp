#include "merge-sort.h"
#include <iostream>

void merge(int arr[], int left, int mid, int right) {
  int n1 = mid - left + 1; // Size of the left subarray
  int n2 = right - mid;    // Size of the right subarray

  // Create temporary arrays
  int *L = new int[n1];
  int *R = new int[n2];

  // Copy data to temporary arrays L[] and R[]
  for (int i = 0; i < n1; i++) {
    L[i] = arr[left + i];
  }
  for (int j = 0; j < n2; j++) {
    R[j] = arr[mid + 1 + j];
  }

  // Merge the temporary arrays back into arr[left..right]
  int i = 0;    // Initial index of first subarray
  int j = 0;    // Initial index of second subarray
  int k = left; // Initial index of merged subarray

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[], if any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[], if any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }

  // Free the allocated memory
  delete[] L;
  delete[] R;
}

void merge_sort(int arr[], int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    // Sort first and second halves
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
    //delete [] arr;
  }
  //delete [] arr;
}
