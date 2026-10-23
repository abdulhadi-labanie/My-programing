#include <iostream>
#include <cmath>
using namespace std;

void ReadCirTriangleData(float &A, float &B){
  
  cout << "\nEnter Triang side A: ";
  cin >> A;
  cout << "\nEnter Triang base B: ";
  cin >> B;

}

float CircleAreaByTriangle(float A, float B){
  float PI = 3.14159;

  float Area = PI * (pow(B, 2) /4) * ( (2 * A - B) / (2 * A + B) );
  
  return Area;
}

void printNums(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 
  float A, B;
  
  ReadCirTriangleData(A, B);
  printNums(CircleAreaByTriangle(A, B));

  return 0;
}
