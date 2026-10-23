#include <iostream>
#include <cmath>
using namespace std;

float ReadNums(){
  float r;
  
  cout << "\nEnter rectangle A: ";
  cin >> r;

  return r;
}

float CircleArea(float r){
  float PI = 3.14159;

  float Area = pow(r, 2) * PI;
  
  return Area;
}

void printNums(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 

  printNums(CircleArea(ReadNums()));

  return 0;
}
