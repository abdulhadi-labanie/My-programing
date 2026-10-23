#include <iostream>
using namespace std;

void ReadNums(int &num1, int &num2, int &num3){
  cout << "\nEnter first num: ";
  cin >> num1;

  cout << "Enter scuond num: ";
  cin >> num2;

  cout << "Enter therd num: ";
  cin >> num3;
  
}

int MaxOf2Nums(int num1, int num2, int num3){
  if (num1 > num2)
    if (num1 > num3)
      return num1;
    else
      return num3;
  else
    if (num2 > num3)
      return num2;
    else
      return num3;
}

void printMaxNum(int Max){
  cout << "\nThe max num is = " << Max << endl;
}

int main() { 

  int num1, num2, num3;

  ReadNums(num1, num2, num3);
  printMaxNum(MaxOf2Nums(num1, num2, num3));

  return 0;
}
