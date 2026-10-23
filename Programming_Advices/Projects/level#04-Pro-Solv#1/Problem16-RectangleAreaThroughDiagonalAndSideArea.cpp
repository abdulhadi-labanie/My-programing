#include <iostream>
#include <cmath>
using namespace std;

void ReadNums(float &A, float &D){
  cout << "\nEnter rectangle A: ";
  cin >> A;

  cout << "Enter rectangle D: ";
  cin >> D;
  
}

float RectangleAreaBySideAndDiagonal(float A, float D){
  return A * ( sqrt(pow(D,2) - pow(A, 2)) );
}

void printNums(float Area){
  cout << "\nThe reclangle Area is = " << Area << endl;
}

int main() { 

  float A, D;

  ReadNums(A, D);
  printNums(RectangleAreaBySideAndDiagonal(A, D));

  return 0;
}
