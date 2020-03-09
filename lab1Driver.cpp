#include "lab1.h"
#include <iostream>
using namespace std;

//Meg Finnegan
//COSC 320
//Lab1

//This program tests the time of three different
//sorting algorithms, bubble sort, insertion sort,
//and selection sort and how they sort different
//size arrays with many different ways of organizing
//the elements in the arrays


int main(){


bool repeat = true;

while (repeat == true){


int arrSize;


    cout << "What would you like the size of the array to be? (100 to 1,000,000)" << endl;
    cin >> arrSize;

int arr[arrSize];

    arrChoice(arr, arrSize);




int endProg;
cout << "Do you want to run the program with another array size? Yes = 1, No = 2" << endl;
cin >> endProg;
if (endProg == 2){
  repeat = false;
}

  }

}
