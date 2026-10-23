#include <iostream>
#include <cmath>
using namespace std;

struct stPiggyBankContenet{
  int penny, nickel, dime, quarter, dollar;
};

stPiggyBankContenet ReadTotalSalse()
{
  stPiggyBankContenet Totalpenny;
  cout << "Enter your pennys: ";
  cin >> Totalpenny.penny;
  cout << "Enter your nickel: ";
  cin >> Totalpenny.nickel;
  cout << "Enter your dime: ";
  cin >> Totalpenny.dime;
  cout << "Enter your quarter: ";
  cin >> Totalpenny.quarter;
  cout << "Enter your dollar: ";
  cin >> Totalpenny.dollar;

  return Totalpenny;
}

int CalculateTotalComission(stPiggyBankContenet PiggyBankContene)
{
  int TotalPiggys = 0;
  TotalPiggys = PiggyBankContene.penny + PiggyBankContene.nickel * 5 + PiggyBankContene.dime * 10 + PiggyBankContene.quarter * 25 + PiggyBankContene.dollar * 100;
  
  return TotalPiggys;
}

int main() { 

  float TotalSalse = CalculateTotalComission(ReadTotalSalse());
  
  cout << endl << "The total of pinny = " << TotalSalse;
  cout << endl << "The total of dollar = " << (float)TotalSalse / 100;
  
  return 0;
}
