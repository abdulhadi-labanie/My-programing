#include <iostream>
#include <cmath>
using namespace std;

void ReadNums(float &A, float &H){
  cout << "\nEnter rectangle A: ";
  cin >> A;

  cout << "Enter rectangle H: ";
  cin >> H;
  
}

float TriangleArea(float A, float H){
  return A * H / 2;
}

void printNums(float Area){
  cout << "\nThe reclangle Area is = " << Area << endl;
}

int main() { 

  float A, H;

  ReadNums(A, H);
  printNums(TriangleArea(A, H));

  return 0;
}
