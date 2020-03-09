//lab3driver.cpp
//main file where everything is implemented
#include "Lab3.h"
#include <iostream>
using namespace std;
#include <cstdlib>
//Meg Finnegan
//COSC 320
//Lab3

//this code takes an array and prints out the elements as a heap

int main(){
bool numArray = true;
Heap s;
float t;
cout << "What would you like the size of the array to be? (100 to 1,000,000)" << endl;
cin >> s.length;
s.arr = new int[s.length];
// cout << "in main" << endl;

int * test = s.arr;

// for(int i = 0; i < s.length; i++){
//   test[i] = i + 1;
// }
// for(int i = 0; i < s.length; i++){
//   cout << test[i] << " ";
// }
while(numArray == true){

  for(int i = 0; i < s.length; i++){
    test[i] = (rand()%500)+1;
  }
  cout << "\nRandom Order: " << endl;
  // cout << "Original Array: ";
  // for(int i = 0; i < s.length; i++){
  //   cout << test[i] << " ";
  // }
  cout << endl;

  t = clock();
  heapSort(s);
  t = clock() - t;
  cout << endl;
    cout << endl;
  cout << "The running time for Heap sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;
  cout << endl;
  // cout << "Sorted Array: ";
  // printHeap(s);
cout << "******************************************************************************************************************" << endl;
  for(int i = 0; i < s.length; i++){
    test[i] = i+1;
  }
  cout << "\nSorted Order: " << endl;
  // cout << "Original Array: ";
  // for(int i = 0; i < s.length; i++){
  //   cout << test[i] << " ";
  // }


  t = clock();
  heapSort(s);
  t = clock() - t;
  cout << endl;
    cout << endl;
  cout << "The running time for Heap sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;
  cout << endl;
  // cout << "Sorted Array: ";
  // printHeap(s);
cout << "*****************************************************************************************************************" << endl;
  for(int i = 0; i < s.length; i++){
    test[i] = s.length - i;
  }
  cout << "\nBackwards Order: " << endl;
  // cout << "Original Array: ";
  // for(int i = 0; i < s.length; i++){
  //   cout << test[i] << " ";
  // }

  t = clock();
  heapSort(s);
  t = clock() - t;
  cout << endl;
    cout << endl;
  cout << "The running time for Heap sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;
  cout << endl;
  // cout << "Sorted Array: ";
  // printHeap(s);
cout << "*****************************************************************************************************************" << endl;
 for(int i = 0; i < s.length; i++){
   test[i] = (rand()%5)+1;
 }
 cout << "\nDuplicate Elements Order: " << endl;
 // cout << "Original Array: ";
 // for(int i = 0; i < s.length; i++){
 //   cout << test[i] << " ";
 // }

 t = clock();
 heapSort(s);
 t = clock() - t;
 cout << endl;
   cout << endl;
 cout << "The running time for Heap sort is: " <<  (float)t/CLOCKS_PER_SEC << endl;
 cout << endl;
 // cout << "Sorted Array: ";
 // printHeap(s);

 numArray = false;
}
delete[] test;
}
