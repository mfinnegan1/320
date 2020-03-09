//Lab 2 .cpp file
#include <iostream>
#include "lab2.h"
using namespace std;
#include <time.h>//maybe use another timer
#include <cstdlib>


//use dynamic memory idk how
//right now but we will figure it out
// Meg Finnegan
//Lab2
//COSC 320
//This program tests the time of two different
//sorting algorithms, merge sort and quick sort,
//and how they sort different
//size arrays with many different ways of organizing
//the elements in the arrays

int counter;
void swap(int * i, int * j){
//swaps the two elements in the array in place
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
  counter++;
}

void merge(int * arr, int l, int p, int r){
int a = 0;
int b = 0;
int k = 0;
counter = 0;
int size1 = p - l + 1;
int size2 =  r - p;
//merge takes two  arrays and combines them
// swapped = false;

int arrA[size1], arrB[size2];

for(int i; i < size1; i++){
  arrA[i] = arr[l + i];
}
for(int j; j < size2; j++){
  arrB[j] = arr[p + 1 + j];
}
a = 0;
b = 0;
k = 1;
 while(a < size1 && b < size2){

if(arrA[a] <= arrB[b]){
  // swapped = true;
  arr[k] = arrA[a];
  k++;
  a++;
}else{
  // swapped = true;
  arr[k] = arrB[b];
  k++;
  b++;
}
while(a < size1){
  arr[k] = arrA[a];
  k++;
  a++;
}
while(b < size2){
  arr[k] = arrB[b];
    k++;
    b++;
}
      }
  }
  void mergeSort(int * arr, int left, int right){
//sorts the array that is passed in

    if(left < right){
    int p = (left + (right-1))/2;
    mergeSort(arr, left, p);
    mergeSort(arr, p+1, right);
    merge(arr, left, p, right);

}
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
