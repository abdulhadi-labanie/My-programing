#include <iostream>
#include <cmath>
using namespace std;

enum enOddOrEven {odd = 1 , even = 2};

int ReadNumber()
{
  int num;

  cout << "\nEnter a Number: ";
  cin >> num;

  return num;
}

enOddOrEven CheckOddOrEven(int num)
{
  if (num % 2 == 0)
    return enOddOrEven::even;
  else
    return enOddOrEven::odd;
}

int PrintRengeFromSumOddFrom1ToNUsingWhile(int N)
{
  int i = 0;
  int sum = 0;
  
  cout << "\nUsing while:\n";

  while(i < N){
    i++;
    if (CheckOddOrEven(i) == enOddOrEven::even)
      sum += i;
  }

  return sum;
}

int PrintRengeFromSumOddFrom1ToNUsingDoWhile(int N)
{
  int counter = 0;
  int sum = 0;

  cout << "\nUsing Do While:\n";

  do{
    counter++;
    
    if (CheckOddOrEven(counter) == enOddOrEven::even)
      sum += counter;
    
  }while(counter < N);

  return sum;
}

int PrintRengeFromSumOddFrom1ToNUsingFor(int N)
{
  int sum = 0;
  
  cout << "\nUsing For loop:\n";
  
  for (int counter = 1; counter<=N; counter++){
    if (CheckOddOrEven(counter) == enOddOrEven::even)
      sum += counter;
  }

  return sum;
}

int main() { 

  int num = ReadNumber();

  cout << PrintRengeFromSumOddFrom1ToNUsingWhile(num) << endl;
  cout << PrintRengeFromSumOddFrom1ToNUsingDoWhile(num) << endl;
  cout << PrintRengeFromSumOddFrom1ToNUsingFor(num) << endl;

  return 0;
}
