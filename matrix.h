#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <stdlib.h>
using namespace std;

// The storage of the array elements should use dynamic memory (i.e. the heap), and hence your
// class should have appropriate copy constructor, destructor, and overloaded assignment operator,
// all of which prevent memory leaks when moving/deleting matrix data.

class matrix {
 private:
  int** arr;
  unsigned n;
  unsigned m;

 public:
  matrix(unsigned rows, unsigned cols);
  matrix(const matrix& rhs);
 ~matrix();
  void fillMatrix();
  void makeDiagonal();
  void makeUpper();
  void makeLower();
  void makeIdentity();
  void makeVector();
  void printMatrix();
  matrix operator=(const matrix& rhs);
  matrix operator+(const matrix& rhs);
  matrix operator-(const matrix& rhs);
  matrix operator*(const matrix& rhs);
  void setElement(unsigned rows, unsigned cols, unsigned data);
  // unsigned getRows() const;
  // unsigned getCols() const;

};


#endif
