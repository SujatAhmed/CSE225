#include <binary-search.h>
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(const vector<int> array, int target){
  int low = 0 ; 
  int high = array.size()-1;

  while(low <= high){

    int mid = (low + high) /2;
    if(array[mid] == target){
      return 1;
    }
    else if(array[mid]>target){
      high = mid -1;
    }
    else{
      low = mid +1;
    }

  }

  return -1;
}
