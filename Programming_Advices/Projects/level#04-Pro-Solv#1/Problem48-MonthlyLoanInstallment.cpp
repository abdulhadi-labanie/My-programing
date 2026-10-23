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

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return (float) LoanAmount / HowManyMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount: ");
    float HowManyMonths = ReadPositiveNumber("How many Months: ");
    
    cout << "\nMonthly installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
    
    return 0;
}
