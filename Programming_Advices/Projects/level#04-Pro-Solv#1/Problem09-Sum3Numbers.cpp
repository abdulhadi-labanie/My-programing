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

void PrintSumTotal(int total){
  cout << "\nThe total is = " << total;
}

//With arrey:
void ReadNumVal(int arr[3]){

  cout << "Enter num1: ";
  cin >> arr[0];

  cout << "Enter num2: ";
  cin >> arr[1];

  cout << "Enter num3: ";
  cin >> arr[2];
  
}

int CalculetSum(int arr[3]){
  return arr[0] + arr[1] + arr[2];
}

void PrintSumTotal(int total){
  cout << "\nThe total is = " << total;
}

int main() { 

    int num1, num2, num3;
    ReadNumVal(num1, num2, num3);
    PrintSumTotal(CalculetSum(num1, num2, num3));

    //With arrey:
    int arr[3];
  
    ReadNumVal(arr);
    PrintSumTotal(CalculetSum(arr));
    
  return 0;
}
