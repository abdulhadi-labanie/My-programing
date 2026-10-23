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

float TotalBillAfterServiceAndTax(float TotalBill)
{
  TotalBill = TotalBill * 1.1;
  TotalBill = TotalBill * 1.16;

  return TotalBill;
}

int main() { 

  float TotalBill = ReadPositiveNumber("Enter total bill: ");

  cout << endl << "Total Bill = " << TotalBill << endl;
  cout << "**********************************\n";
  cout << "Total Bill After Service Fee and sales Tax = " 
        << TotalBillAfterServiceAndTax(TotalBill) << endl;
  
  return 0;
}
