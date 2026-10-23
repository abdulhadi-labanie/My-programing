#include <iostream>
#include <cmath>
using namespace std;

int ReadTotalSalse()
{
  int TotalSalse;
  cout << "Enter your total salse: ";
  cin >> TotalSalse;

  return TotalSalse;
}

float GetComissionPrecentage(float TotalSalse)
{
  if (TotalSalse >= 1000000)
    return 0.01;
  else if (TotalSalse >= 500000)
    return 0.02;
  else if (TotalSalse >= 100000)
    return 0.03;
  else if (TotalSalse >= 50000)
    return 0.05;
  else
    return 0.00;
}

float CalculateTotalComission(float TotalSalse)
{
  return GetComissionPrecentage(TotalSalse) * TotalSalse;
}

int main() { 

  float TotalSalse = ReadTotalSalse();
  
  cout << endl << "Comission Percentage = " << GetComissionPrecentage(TotalSalse);
  cout << endl << "Total Comission = " << CalculateTotalComission(TotalSalse);
  
  return 0;
}
