#include <iostream>
using namespace std;

int ReadNumber(){
  int num;
  
  cout << "Enter a number: ";
  cin >> num;

  return num;
}

float CalculetNumToHalf(int num){
  return (float) num / 2;
}

void PrintHalfOfNum(int num){
  cout << "\nHalf num of: " + to_string(num) + " is = " + to_string(CalculetNumToHalf(num));
  
}

int main() { 

  PrintHalfOfNum(ReadNumber());

  return 0;
}
