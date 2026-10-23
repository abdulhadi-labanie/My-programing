#include <iostream>
#include <cmath>
using namespace std;

float ReadNums(){
  float D;
  
  cout << "\nEnter Circle D: ";
  cin >> D;

  return D;
}

float CircleAreaByDiameter(float D){
  float PI = 3.14159;

  float Area = ( pow(D, 2) * PI ) / 4;
  
  return Area;
}

void printNums(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 

  printNums(CircleAreaByDiameter(ReadNums()));

  return 0;
}
