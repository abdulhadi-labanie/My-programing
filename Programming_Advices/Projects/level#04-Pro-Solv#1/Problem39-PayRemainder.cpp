#include <iostream>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message){
  float num;
  do
  {
    cout << Message;
    cin >> num;
  }while (num < 0);
    
  return num;
}

float CalculateREamainder(float TotalBill, float TotalCashPaid)
{
  return TotalCashPaid - TotalBill;
}

int main() { 

  float TotalBill = ReadPositiveNumber("Enter total bill: ");
  float TotalCashPaid = ReadPositiveNumber("Enter total cash paid: ");

  cout << endl << "Total Bill = " << TotalBill << endl;
  cout << "Total cash paid = " << TotalCashPaid << endl;

  cout << "**********************************\n";
  cout << "Remainder = " << CalculateREamainder(TotalBill, TotalCashPaid) << endl;
  
  return 0;
}
