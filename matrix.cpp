#include "matrix.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

// unsigned getRows() const;
// unsigned getCols() const;

matrix :: matrix(unsigned rows, unsigned cols){
  n = rows;
  m = cols;
  arr = new int*[n];

  for(unsigned i= 0; i < n; i++){
    arr[i] = new int [m];

  for(unsigned k = 0; k < n; k++){
    arr[i][k] = 1;
      }
    }
}
matrix :: matrix(const matrix& rhs){
  n = rhs.n;
  m = rhs.m;
  arr = new int* [n];

  for(unsigned i= 0; i < n; i++){
    arr[i] = new int [m];
  }
   for(unsigned k = 0; k < n; k++){
        for(unsigned h = 0; h < m; h++){
          arr[k][h] = rhs.arr[k][h];
        }
   }
}

matrix :: ~matrix(){
  for(unsigned i= 0; i < n; i++){
     delete[]arr[i];
  }
    delete[]arr;
}

matrix matrix :: operator=(const matrix& rhs){
  for(unsigned i= 0; i < n; i++){
     delete[]arr[i];
  }
    delete[]arr;

  n = rhs.n;
  m = rhs.m;
  arr = new int* [n];

  for(unsigned i= 0; i < n; i++){
    arr[i] = new int [m];
  }
   for(unsigned k = 0; k < n; k++){
        for(unsigned h = 0; h < m; h++){
          arr[k][h] = rhs.arr[k][h];
        }
   }
   return *this;
}

matrix matrix::operator+(const matrix& rhs){
    matrix c(n,m);
      for(unsigned k = 0; k < n; k++){
          for(unsigned h = 0; h < m; h++){
          c.arr[k][h] = arr[k][h] + rhs.arr[k][h];
          }
      }
      return c;
}

matrix matrix ::operator-(const matrix& rhs){
  matrix c(n,m);
    for(unsigned k = 0; k < n; k++){
        for(unsigned h = 0; h < m; h++){
        c.arr[k][h] = arr[k][h] - rhs.arr[k][h];
        }
    }
    return c;
}
// void setElement(unsigned rows, unsigned cols, unsigned data){
//
// }
matrix matrix :: operator*(const matrix& rhs){
  matrix c(n,m);
    for(unsigned d = 0; d < n; d++){
      for(unsigned k = 0; k < m; k++){
          unsigned sum = 0;
          for(unsigned h = 0; h < m; h++){
            for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
                if (i != j && i + j + 1 != n)

                    rhs.arr[i][j] = 0;
            }
  }
          sum = arr[d][h] * rhs.arr[h][k];

          }   c.arr[d][k] = sum;
      }
    }
    return c;
}

void matrix :: fillMatrix(){
  for (unsigned i = 0; i < n; i++) {
          for (unsigned j = 0; j < m; j++) {
              arr[i][j] = (rand()%10)+1;
          }
      }
}

void matrix :: printMatrix(){
    cout << endl;
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
              cout <<  arr[i][j] << " ";

            } cout << endl;
        }
        cout << endl;
  }

  void matrix :: makeDiagonal(){
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
                if (i != j)
                    // Change all non-diagonal
                    // elements to zero
                    arr[i][j] = 0;
            }
     }
}

  void matrix :: makeUpper(){
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
                if (j > i){
                  arr[i][j] = 0;
                }else{
                  arr[i][j] = (rand()%10)+1;
            }
       }
    }
  }

  void matrix :: makeLower(){
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
                if (j < i){
                  arr[i][j] = 0;
                }else{
                  arr[i][j] = (rand()%10)+1;
                }
            }
       }
  }

  void matrix :: makeIdentity(){
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; j++) {
                if (j == i){
                  arr[i][j] = 1;
                }else{
                  arr[i][j] = 0;
                }
            }
       }
  }

  void matrix :: makeVector(){
    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < m; ++j) {
                  arr[i][j] = 0;
            }
       }

    for (unsigned i = 0; i < n; i++) {
            for (unsigned j = 0; j < 1; ++j) {
                  arr[i][j] = (rand()%10) +1;
                  j=0;
            }
       }
  }
