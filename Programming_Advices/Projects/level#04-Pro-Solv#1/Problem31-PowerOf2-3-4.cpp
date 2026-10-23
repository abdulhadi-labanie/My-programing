#include <iostream>
#include <cmath>
using namespace std;


int ReadNumber()
{
  int num;

  cout << "Enter a number: ";
  cin >> num;

  return num;
}

void CalculeatPower(int num)
{
  int pow2, pow3, pow4;

  pow2 = num * num;
  pow3 = pow2 * num;
  pow4 = pow2 * pow2;

  cout << "Power 2 = " << pow2 << "\nPower 3 = " << pow3 << "\nPower 4 = " << pow4;
}

int main() { 

  CalculeatPower(ReadNumber());

  return 0;
}
