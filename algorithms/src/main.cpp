#include "bubble-sort.h"
#include "insertion-sort.h"
#include "merge-sort.h"
#include "quick-sort.h"
#include "random-array.h"
#include "selection-sort.h"
#include <ctime>
#include <iostream>
using namespace std;

double testBubbleSort(int size) {

  int *arr = generate_random_array(size, 5, 10);
  clock_t start = clock();
  bubbleSort(arr, size);
  clock_t end = clock();

  double duration = double(end - start) / CLOCKS_PER_SEC;
  //cout << duration << endl;
  delete[] arr;
  return duration;
}

double testInsertionSort(int size) {

  int *arr = generate_random_array(size, 5, 10);
  clock_t start = clock();
  insertion_sort(arr, size);
  clock_t end = clock();
  double duration = double(end - start) / CLOCKS_PER_SEC;
  //cout << duration << endl;
  delete[] arr;
  return duration;
}
double testSelectionSort(int size) {

  int *arr = generate_random_array(size, 5, 10);
  clock_t start = clock();
  selection_sort(arr, size);
  clock_t end = clock();

  double duration = double(end - start) / CLOCKS_PER_SEC;
  //cout << duration << endl;

  delete[] arr;
  return duration;
}
double testMergeSort(int size) {
  int *arr = generate_random_array(size, 5, 10);

  clock_t start = clock();
  merge_sort(arr, 0, size - 1);
  clock_t end = clock();
  double duration = double(end - start) / CLOCKS_PER_SEC;
  //cout << duration << endl;
  delete[] arr;
  return duration;
}

double testQuickSort(int size) {

  int *arr = generate_random_array(size, 5, 10);
  clock_t start = clock();
  quick_sort(arr, 0, size - 1);
  clock_t end = clock();
  double duration = double(end - start) / CLOCKS_PER_SEC;
  //cout << duration << endl;
  delete[] arr;
  return duration;
}

void testCase(int size) {
  cout << "Generated dataset of: " << size << endl;
  cout << "Bubble Sort time: " << testBubbleSort(size) << endl;
  cout << "Insertion Sort time: " << testInsertionSort(size) << endl;
  cout << "Selection Sort time: " << testSelectionSort(size) << endl;
  cout << "Merge Sort time: " << testMergeSort(size) << endl;
  cout << "Quick Sort time: " << testQuickSort(size) << endl;
  cout << endl;
}

int main() {

  for (int i = 1000; i <= 125000; i = i * 5) {
    testCase(i);
  }
}
