#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide(){
  float A;
  
  cout << "\nEnter Circle A: ";
  cin >> A;

  return A;
}

float CircleAreaBySquare(float A){
  float PI = 3.14159;

  float Area = ( pow(A, 2) * PI ) / 4;
  
  return Area;
}

void printNums(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 

  printNums(CircleAreaBySquare(ReadSquareSide()));

  return 0;
}
