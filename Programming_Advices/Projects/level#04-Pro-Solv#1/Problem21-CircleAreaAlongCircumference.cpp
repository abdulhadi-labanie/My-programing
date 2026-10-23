#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference(){
  float L;
  
  cout << "\nEnter Circle L: ";
  cin >> L;

  return L;
}

float CircleAreaByCircumference(float L){
  float PI = 3.14159;

  float Area = pow(L, 2) / ( PI  * 4 );
  
  return Area;
}

void printNums(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 

  printNums(CircleAreaByCircumference(ReadCircumference()));

  return 0;
}
