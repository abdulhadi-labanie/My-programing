#include <iostream>
#include <cmath>
using namespace std;

void ReadCirTriangleData(float &A, float &B, float &C){
  
  cout << "\nEnter Triang side A: ";
  cin >> A;
  cout << "\nEnter Triang base B: ";
  cin >> B;
  cout << "\nEnter Triang base C: ";
  cin >> C;

}

float CircleAreaByATriangle(float A, float B, float C){
  const float PI = 3.14159;
  float P, total;
  P = (A + B + C) / 2;

  total = (A*B*C) / ( 4* sqrt( P * (P-A) * (P-B) * (P-C) ) );
  
  float Area = PI * pow(total, 2);
  
  return Area;
}

void PrintResult(float Area){
  cout << "\nThe Circle Area is = " << Area << endl;
}

int main() { 
  float A, B, C;
  
  ReadCirTriangleData(A, B, C);
  PrintResult(CircleAreaByATriangle(A, B, C));

  return 0;
}
