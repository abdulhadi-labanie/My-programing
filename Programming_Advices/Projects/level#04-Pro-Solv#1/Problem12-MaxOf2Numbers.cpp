#include <iostream>
using namespace std;

void ReadNums(int &num1, int &num2){
  cout << "\nEnter first num: ";
  cin >> num1;

  cout << "\nEnter scuond num: ";
  cin >> num2;
  
}

int MaxOf2Nums(int num1, int num2){
  if (num1 > num2)
    return num1;
  else
    return num2;
}

void printMaxNum(int Max){
  cout << "\nThe max num is = " << Max << endl;
}

int main() { 

  int num1, num2;

  ReadNums(num1, num2);
  printMaxNum(MaxOf2Nums(num1, num2));

  return 0;
}
