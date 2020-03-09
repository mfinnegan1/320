// lab3.cpp
#include <iostream>
#include "Lab3.h"
#include <cmath>
using namespace std;

// struct Heap {
// int* arr; // the underlying array
// int length; // should always be the size of arr
// int heap_size; // will change based on which portion of arr is a valid heap
// }; original struct

int& Heap :: operator[](int i){
  if (1 <= i <= length){
  return arr[i-1]; // so A[1] is the first and A[n] is the last
  }
}

void swap(int &i, int &j){

int temp = i;
  i = j;
  j = temp;
}

void maxHeapify(Heap &arr, int i){
 // cout << "in max heap" << endl;
  int l = (2*i);
  int r = (2*i) + 1;
  int largest = i;
  if(l <= arr.heap_size && arr[l] > arr[i]){
    largest = l;
  }else{
    largest = i;
  }
  if(r <= arr.heap_size && arr[r] > arr[largest]){
    largest = r;
  }
  if(largest != i){
    swap(arr[i], arr[largest]);
    maxHeapify(arr, largest);
  }
}

void buildMaxHeap(Heap &arr){
  // cout << "in build max heap" << endl;
  arr.heap_size = arr.length;
  for (int i = (arr.length)/2; i > 0; i--){
    maxHeapify(arr, i);
  }
}


void heapSort(Heap &arr){
  // cout << "in heap sort" << endl;
  buildMaxHeap(arr);
    for(int i = arr.length; i > 1; i--){
       swap(arr[1], arr[i]);
       arr.heap_size = arr.heap_size - 1;
       maxHeapify(arr, 1);
    }
}

void printHeap(Heap & arr){
  int x = 1;
  int y = 0;
 cout << arr[1] << endl;
  for(int i = 1; i < arr.length; i++){
    cout << arr[i+1] << " ";
    y++;

    if(y == pow(2, x)){
      x++;
      y = 0;
      cout << endl;
    }
  }

}
