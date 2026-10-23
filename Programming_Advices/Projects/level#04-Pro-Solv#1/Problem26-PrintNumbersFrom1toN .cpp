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

void PrintRengeFrom1ToNUsingWhile(int num)
{
  int i = 0;
  
  cout << "\nUsing while:\n";

  while(i < num){
    i++;
    cout << i << endl;
  }
}

void PrintRengeFrom1ToNUsingDoWhile(int num)
{
  int i = 0;

  cout << "\nUsing Do While:\n";

  do{
    i++;
    cout << i << endl;
    
  }while(i < num);
}

void PrintRengeFrom1ToNUsingFor(int num)
{

  cout << "\nUsing For loop:\n";

  for (int i = 1; i <= num; i++){
    cout << i << endl;
  }
}

int main() { 

  int num = ReadNumber();

  PrintRengeFrom1ToNUsingWhile(num);
  PrintRengeFrom1ToNUsingDoWhile(num);
  PrintRengeFrom1ToNUsingFor(num);

  return 0;
}
