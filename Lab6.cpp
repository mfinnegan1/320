#include "Lab6.h"
#include <iostream>
using namespace std;

hireAssistant(a){
int best = 0;
for(int i = 1; i < n; i++){
  if(n > best){
    best = i;
    //hire candidate i;
  }
 }
}


void swap(int * i, int * j){
//swaps the two elements in the array in place
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
  counter++;
}

int partition(int * arr, int start, int end){
  //finds the p in the array
int pivot = arr[end];
int i = (start-1);
  for(int j = start; j <= end-1; j++){

    if(arr[j] < pivot){
    i++;
    swap(&arr[i], &arr[j]);
  }
  }
  swap(&arr[i+1], &arr[end]);
  return (i+1);
}

void quickSort(int* arr, int start, int end){
int p;
//sorts the array passed inside
  counter = 0;
    if(start < end){
      p = partition(arr, start, end);
      quickSort(arr, start, p-1);
      quickSort(arr, p+1, end);

}
}

void quickSortRand(int* arr, int start, int end){


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
