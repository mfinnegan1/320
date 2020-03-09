#include <iostream>
#include "lab1.h"
using namespace std;
#include <time.h>
#include <cstdlib>

// Meg Finnegan
//Lab1
//COSC 320
//This program tests the time of three different
//sorting algorithms, bubble sort, insertion sort,
//and selection sort and how they sort different
//size arrays with many different ways of organizing
//the elements in the arrays

bool swapped;
int counter;
int swap(int * i, int * j){
//swaps the two elements in the array in place
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
  counter++;
}

void bubbleSort(int * arr, int n){

  swapped = false;
  counter = 0;

 for(int i = 0; i<n; i++){

   for(int j = 0; j < n-i-1; j++){
    if(arr[j] > arr[j+1]){
      swap(&arr[j], &arr[j+1]);
      //counter++;
      swapped = true;
    }
  }
  }

  // cout << "Bubble Sort: " << " ";
  // for(int h = 0; h < n; h++){
  //   cout << arr[h] << " ";
  // }
 isSorted(swapped);
 cout<< "The number of swaps for Bubble sort is: " << counter << endl;

}


void insertionSort(int* arr, int n){

  counter = 0;
  // examine a[i] and move it left until a[i-1] < a[i]
  int target, j;
  swapped = false;
  for(int i=1; i<n; i++){
    target = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > target){
      arr[j+1] = arr[j];
      j = j - 1;
      counter++;
      swapped = true;
    }
    arr[j + 1] = target;
  }

  // cout << "Insertion Sort: " << " ";
  // for(int h = 0; h < n; h++){
  //   cout << arr[h] << " ";
  // }
    isSorted(swapped);
   cout<< "The number of swaps for Insertion sort is: " << counter << endl;
}




void selectionSort(int * arr, int n){


  swapped = false;
  counter = 0;
  int min;

  //find the smallest number
  // put it in the first position in the array

  for(int i = 0; i < n-1; i++){
    min = i;
     for(int j = i+1; j < n; j++){
       if(arr[j] < arr[min]){
       min = j;
       swap(&arr[min], &arr[i]);

  //     counter++;
       swapped = true;
     }

    }
}
    // cout << "Selection Sort: " << " ";
    // for(int h = 0; h < n; h++){
    //   cout << arr[h] << " ";
    // }
  isSorted(swapped);
 cout<< "The number of swaps for Selection sort is: " << counter << endl;
}


void isSorted(bool swapped){

  if(swapped == true){
        cout << "\nThe array has been sorted" << endl;
  }
}

void arrChoice(int arr[], int n){
float t;
bool numArray = true;
int arr2[n];
int arr3[n];
        for(int i = 0; i < n; i++){
          arr[i] = (rand()%500)+1;
        }
        for(int j = 0; j < n; j++){
          arr2[j] = arr[j];
          arr3[j] = arr[j];
        }
        cout << "\nRandom Order: " << endl;
        while(numArray == true){
        t = clock();
        bubbleSort(arr, n);
        t = clock() - t;
        cout << "The running time for Bubble sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


         cout << "\nRandom Order: " << endl;
        t = clock();
        selectionSort(arr2, n);
        t = clock() - t;
        cout << "The running time for Selection sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


        cout << "\nRandom Order: " << endl;
        t = clock();
        insertionSort(arr3, n);
        t = clock() - t;
        cout << "The running time for Insertion sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;




      for(int i = 0; i < n; i++){
        arr[i] = i;
      }
      for(int j = 0; j < n; j++){
        arr2[j] = arr[j];
        arr3[j] = arr[j];
      }
      cout << "\nSorted Order: " << endl;

      t = clock();
      bubbleSort(arr, n);
      t = clock() - t;
      cout << "The running time for Bubble sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


       cout << "\nSorted Order: " << endl;
      t = clock();
      selectionSort(arr2, n);
      t = clock() - t;
      cout << "The running time for Selection sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


      cout << "\nSorted Order: " << endl;
      t = clock();
      insertionSort(arr3, n);
      t = clock() - t;
      cout << "The running time for Insertion sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;




    for(int i = 0; i < n; i++){
      arr[i] = n - i;
    }
    for(int j = 0; j < n; j++){
      arr2[j] = arr[j];
      arr3[j] = arr[j];
    }
    cout << "\nBackwards Order: " << endl;

    t = clock();
    bubbleSort(arr, n);
    t = clock() - t;
    cout << "The running time for Bubble sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


     cout << "\nBackwards Order: " << endl;
    t = clock();
    selectionSort(arr2, n);
    t = clock() - t;
    cout << "The running time for Selection sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


    cout << "\nBackwards Order: " << endl;
    t = clock();
    insertionSort(arr3, n);
    t = clock() - t;
    cout << "The running time for Insertion sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


  for(int i = 0; i < n; i++){
    arr[i] = (rand()%5)+1;
  }
  for(int j = 0; j < n; j++){
    arr2[j] = arr[j];
    arr3[j] = arr[j];
  }
  cout << "\nDuplicate Elements Order: " << endl;

  t = clock();
  bubbleSort(arr, n);
  t = clock() - t;
  cout << "The running time for Bubble sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


   cout << "\nDuplicate Elements Order: " << endl;
  t = clock();
  selectionSort(arr2, n);
  t = clock() - t;
  cout << "The running time for Selection sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


  cout << "\nDuplicate Elements Order: " << endl;
  t = clock();
  insertionSort(arr3, n);
  t = clock() - t;
  cout << "The running time for Insertion sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;
  numArray = false;
}

}
