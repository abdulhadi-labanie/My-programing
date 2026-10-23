#include <iostream>
using namespace std;

void ReadNums(int &num1, int &num2){
  cout << "\nEnter first num: ";
  cin >> num1;

  cout << "Enter scuond num: ";
  cin >> num2;
  
}

void SwapNums(int &num1, int &num2){
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

void printNums(int num1, int num2){
  cout << "\nThe num1 is = " << num1 << endl;
  cout << "The num2 is = " << num2 << endl;
}

int main() { 

  int num1, num2;

  ReadNums(num1, num2);
  printNums(num1, num2);
  SwapNums(num1, num2);
  printNums(num1, num2);

  return 0;
}
