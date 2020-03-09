#ifndef LAB3_H
#define LAB3_H
#include <iostream>
using namespace std;

struct Heap {
int* arr; // the underlying array
int length; // should always be the size of arr
int heap_size; // will change based on which portion of arr is a valid heap
// give the struct an [] operator to pass through access to arr
// we return an int reference so we can assign into the structure,
// otherwise it would only return a copy of the indexed element
int& operator[](int i);

};

void printHeap(Heap arr[]);
void maxHeapify(Heap arr[], int n);
void buildMaxHeap(Heap arr[]);
void heapSort(Heap arr[]);
void swap(int &i, int &j);

#include "Lab3.cpp"
#endif
