#include <iostream>
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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return (float) LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount: ");
    float MonthlyInstallment = ReadPositiveNumber("Please enter Monthly Installment: ");
    
    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
    
    return 0;
}
