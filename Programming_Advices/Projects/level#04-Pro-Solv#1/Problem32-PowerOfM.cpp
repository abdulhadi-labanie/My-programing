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

int ReadNumPower()
{
  int power;

  cout << "Enter a power number: ";
  cin >> power;

  return power;
}

int CalculeatPower(int num, int power)
{
  int totalPower = 1;

  if (power == 0)
    return 1;

  for (int i = 1; i<=power; i++){
    
    totalPower *= num;
  }
  return totalPower;
}

int main() { 

  int number = ReadNumber();
  int power = ReadNumPower();

  int result = CalculeatPower(number, power);  

  cout << "\nThe result of " << number << " raised to the power of " << power << " is: " << result << endl;
  
  return 0;
}
