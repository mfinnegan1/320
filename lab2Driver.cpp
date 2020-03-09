//main file where everything is implemented
#include "lab2.h"
#include <iostream>
using namespace std;

//Meg Finnegan
//COSC 320
//Lab2

//This program tests the time of two different
//sorting algorithms, merge sort and quick sort,
//and how they sort different
//size arrays with many different ways of organizing
//the elements in the arrays


int main(){

int arrSize;


    cout << "What would you like the size of the array to be? (100 to 1,000,000)" << endl;
    cin >> arrSize;

int arr[arrSize];
int arr2[arrSize];
int sortBegin = arrSize - (arrSize -1);

    float t;
    bool numArray = true;


            for(int i = 0; i < arrSize; i++){
              arr[i] = (rand()%500)+1;
            }
            for(int k = 0; k < arrSize; k++){
              arr2[k] = arr[k];

            }
        while(numArray == true){
            cout << "\nRandom Order: " << endl;
            t = clock();
          //  mergeSort(arr, 0, arrSize-1);
            t = clock() - t;
            cout << "The running time for Merge sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;

            cout << "\nRandom Order: " << endl;
            t = clock();
            quickSort(arr2, sortBegin, arrSize-1);
            t = clock() - t;
            cout << "The running time for Quick sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


            for(int i = 0; i < arrSize; i++){
              arr[i] = i;
            }
            for(int k = 0; k < arrSize; k++){
              arr2[k] = arr[k];
            }

            cout << "\nSorted Order: " << endl;

            t = clock();
          //    mergeSort(arr, 0, arrSize-1);
            t = clock() - t;
            cout << "The running time for Merge sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


            cout << "\nSorted Order: " << endl;
            t = clock();
            quickSort(arr2, sortBegin, arrSize-1);
            t = clock() - t;
            cout << "The running time for Quick sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


            for(int i = 0; i < arrSize; i++){
              arr[i] = arrSize - i;
            }
            for(int k = 0; k < arrSize; k++){
              arr2[k] = arr[k];

            }


            cout << "\nBackwards Order: " << endl;

            t = clock();
          //    mergeSort(arr, 0, arrSize-1);
            t = clock() - t;
            cout << "The running time for Merge sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


           cout << "\nBackwards Order: " << endl;
           t = clock();
           quickSort(arr2, sortBegin, arrSize-1);
           t = clock() - t;
           cout << "The running time for Quick sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;



           for(int i = 0; i < arrSize; i++){
             arr[i] = (rand()%5)+1;
           }
           for(int k = 0; k < arrSize; k++){
             arr2[k] = arr[k];
           }

           cout << "\nDuplicate Elements Order: " << endl;

           t = clock();ss
          //   mergeSort(arr, 0, arrSize-1);
           t = clock() - t;
           cout << "The running time for Merge sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;


           cout << "\nDuplicate Elements Order: " << endl;
           t = clock();
           quickSort(arr2, sortBegin, arrSize-1);
           t = clock() - t;
           cout << "The running time for Quick sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;

           numArray = false;
        }
      }
