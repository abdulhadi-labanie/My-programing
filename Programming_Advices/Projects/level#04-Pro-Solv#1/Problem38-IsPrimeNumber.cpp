#include <iostream>
#include <cmath>
using namespace std;

enum enPrimNotPrime { prime = 1, NotPrime = 2};

float ReadPositiveNumber(string Message){
  float num;
  do
  {
    cout << Message;
    cin >> num;
  }while (num < 0);
    
  return num;
}

enPrimNotPrime CheckPrime(int num)
{
  int M = round(num/2);
  for (int counter = 2; counter<=M; counter++)
  {
    if (num % counter == 0)
      return enPrimNotPrime::NotPrime;
  }

  return enPrimNotPrime::prime;
}

void PrintNumberType(int num){
  switch(CheckPrime(num))
  {
    case enPrimNotPrime::prime:
      cout << "The number is prime\n";
      break;
    case enPrimNotPrime::NotPrime:
      cout << "The number is not prime\n";
  }
}

int main() { 

  PrintNumberType(ReadPositiveNumber("Enter a positive number: "));
  
  return 0;
}
