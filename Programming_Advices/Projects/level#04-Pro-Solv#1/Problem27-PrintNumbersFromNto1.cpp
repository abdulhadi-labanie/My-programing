#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
  int num;

  cout << "\nEnter a Number: ";
  cin >> num;

  return num;
}

void PrintRengeFromNTo1UsingWhile(int num)
{
  int counter = num + 1;
  
  cout << "\nUsing while:\n";

  while(counter > 1){
    counter--;
    cout << counter << endl;
  }
}

void PrintRengeFromNTo1UsingDoWhile(int num)
{
  int counter = num + 1;

  cout << "\nUsing Do While:\n";

  do{
    counter--;
    cout << counter << endl;
    
  }while(counter > 1);
}

void PrintRengeFromNTo1UsingFor(int num)
{

  cout << "\nUsing For loop:\n";
  
  for (int counter = num; counter >= 1; counter--){
    cout << counter << endl;
  }
}

int main() { 

  int num = ReadNumber();

  PrintRengeFromNTo1UsingWhile(num);
  PrintRengeFromNTo1UsingDoWhile(num);
  PrintRengeFromNTo1UsingFor(num);

  return 0;
}
