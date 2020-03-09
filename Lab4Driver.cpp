#include <iostream>
#include "matrix.h"
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main()
{
//   Diagonal matrices: all entries off the main diagonal (A0,0, A1,1, . . . , An,n) are 0
// (b) Upper (or Lower) triangular matrices: entries below (or above) the main diagonal are 0.
// (c) The identity matrix: 1 on the main diagonal, 0 otherwise.
// (d) A vector (an n × 1 matrix)!
unsigned x,y;
bool print = false;
int pTrue;
cout << "What size would you like the rows of the matrix to be?" << endl;
cin >> x;

cout << "What size would you like the columns of the matrix to be?" << endl;
cin >> y;

 cout << "Would you like to print the matrix? Yes = 1, No = 0 (reccomended for small matricies only)" << endl;
 cin >> pTrue;

if(pTrue == 1){
  print = true;
}

 matrix s(x,y);
 matrix h(x,y);
 matrix c(x,y);
 float t;

 h.fillMatrix();
 s.fillMatrix();
 //diagonal matrices
 cout << "Original Diagonal Matrix: A" << endl;
 h.makeDiagonal();
 s.makeDiagonal();
 if(print == true){
   h.printMatrix();
 }

 cout << "Original Diagonal Matrix: B" << endl;
 if(print == true){
   s.printMatrix();
 }

cout << "Diagonal Matrix Addition: " << endl;
 c = s + h;
 if(print == true){
   c.printMatrix();
 }

cout << "Diagonal Matrix Subtraction: " << endl;
 c = s - h;
 if(print == true){
   c.printMatrix();
 }


cout << "Diagonal Matrix Mutiplication: " << endl;
 t = clock();
 c = s * h;
 t = clock() - t;
 if(print == true){
   c.printMatrix();
 }
 cout << "The running time for diagonal matrix multiplication is: " <<  (float)t/CLOCKS_PER_SEC << endl;
cout << "-----------------------------------------------------------------------------------------" << endl;
//upper triangular matrices
cout << "Original Upper Triangle Matrix: A" << endl;
h.makeUpper();
if(print == true){
  h.printMatrix();
}

cout << "Original Upper Triangle Matrix: B" << endl;
s.makeUpper();
if(print == true){
  s.printMatrix();
}


cout << "Upper Triangle Matrix Addition: " << endl;
 c = s + h;
 if(print == true){
   c.printMatrix();
 }


cout << "Upper Triangle Matrix Subtraction: " << endl;
 c = s - h;
 if(print == true){
   c.printMatrix();
 }


cout << "Upper Triangle Matrix Mutiplication: " << endl;
 t = clock();
 c = s * h;
 t = clock() - t;
 if(print == true){
   c.printMatrix();
 }
 cout << "The running time for upper triangle matrix multiplication is: " <<  (float)t/CLOCKS_PER_SEC << endl;
cout << "-----------------------------------------------------------------------------------------" << endl;
cout << "Original Lower Triangle Matrix: A" << endl;
 h.makeLower();
 if(print == true){
   h.printMatrix();
 }
 cout << "Original Lower Triangle Matrix: B" << endl;
s.makeLower();
if(print == true){
  s.printMatrix();
}


cout << "Lower Triangle Matrix Addition: " << endl;
 c = s + h;
 if(print == true){
   c.printMatrix();
 }


cout << "Lower Triangle Matrix Subtraction: " << endl;
 c = s - h;
 if(print == true){
   c.printMatrix();
 }


cout << "Lower Triangle Matrix Mutiplication: " << endl;
t = clock();
 c = s * h;
 t = clock() - t;
 if(print == true){
   c.printMatrix();
 }

 cout << "The running time for lower triangle matrix multiplication is: " <<  (float)t/CLOCKS_PER_SEC << endl;

//the identity matrices
cout << "-----------------------------------------------------------------------------------------" << endl;
cout << "Original Identity Matrix: A" << endl;
 h.makeIdentity();
 if(print == true){
   h.printMatrix();
 }
cout << "Original Identity Matrix: B" << endl;
s.makeIdentity();
if(print == true){
  s.printMatrix();
}


cout << "Identity Matrix Addition: " << endl;
 c = s + h;
 if(print == true){
   c.printMatrix();
 }


cout << "Identity Matrix Subtraction: " << endl;
 c = s - h;
 if(print == true){
   c.printMatrix();
 }


cout << "Identity Matrix Mutiplication: " << endl;
t = clock();
 c = s * h;
 t = clock() - t;

 if(print == true){
   c.printMatrix();
 }

 cout << "The running time for identity matrix multiplication is: " <<  (float)t/CLOCKS_PER_SEC << endl;

cout << "-----------------------------------------------------------------------------------------" << endl;
//a vector

 cout << "Original Vector Matrix: A" << endl;
  h.makeVector();
  if(print == true){
    h.printMatrix();
  }
 cout << "Original Vector Matrix: B" << endl;
 s.makeVector();
 if(print == true){
   s.printMatrix();
 }


 cout << "Vector Matrix Addition: " << endl;
  c = s + h;
  if(print == true){
    c.printMatrix();
  }


 cout << "Vector Matrix Subtraction: " << endl;
  c = s - h;
  if(print == true){
    c.printMatrix();
  }


 cout << "Vector Matrix Mutiplication: " << endl;
 t = clock();
  c = s * h;
  t = clock() - t;
  if(print == true){
    c.printMatrix();
  }
  cout << "The running time for vector matrix multiplication is: " <<  (float)t/CLOCKS_PER_SEC << endl;

}
