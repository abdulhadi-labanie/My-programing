#include <iostream>
#include <cmath>
using namespace std;


int ReadPositiveNumber(string masege)
{
  int num;

  do{
    cout << masege;
    cin >> num;
  }while(num < 0);

  return num;
}

int Factorial(int N)
{
  int total = 1;

  for (int i = N; i>=1; i--){
    total *= i;
  }

  return total;
}

int main() { 

  cout << Factorial(ReadPositiveNumber("Enter positive num: ")) << endl;

  return 0;
}
