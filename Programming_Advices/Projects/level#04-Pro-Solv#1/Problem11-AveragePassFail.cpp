#include <iostream>
using namespace std;

enum enPassFile {pass = 1, file = 2};

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

float CalculetAVE(int num1, int num2, int num3){
  return (float) CalculetSum(num1, num2, num3) / 3;
}

enPassFile checkAVE(float ave){
  if (ave > 50)
    return enPassFile::pass;
  else
    return enPassFile::file;
}

void PrintSumTotal(float AVE){
  cout << "\nThe AVE is = " << AVE;

  if (checkAVE(AVE) == enPassFile::pass)
    cout << "\nYou are Pass!\n";
  else
    cout << "\nYou are File!!\n";
}


int main() { 

  int num1, num2, num3;
  
  ReadNumVal(num1, num2, num3);
  PrintSumTotal(CalculetAVE(num1, num2, num3));

  return 0;
}
