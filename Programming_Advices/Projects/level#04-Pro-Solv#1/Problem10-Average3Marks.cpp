#include <iostream>
using namespace std;

void ReadNumVal(int &num1, int &num2, int &num3){

  cout << "Enter num1: ";
  cin >> num1;

  cout << "Enter num2: ";
  cin >> num2;

  cout << "Enter num3: ";
  cin >> num3;

}

int CalculetSum(int num1, int num2, int num3){
  return num1 + num2 + num3;
}

int CalculetAVE(int num1, int num2, int num3){
  return (float) CalculetSum(num1, num2, num3) / 3;
}

void PrintSumTotal(float AVE){
  cout << "\nThe AVE is = " << AVE;
}


int main() { 

  int num1, num2, num3;
  
  ReadNumVal(num1, num2, num3);
  PrintSumTotal(CalculetAVE(num1, num2, num3));

  return 0;
}
