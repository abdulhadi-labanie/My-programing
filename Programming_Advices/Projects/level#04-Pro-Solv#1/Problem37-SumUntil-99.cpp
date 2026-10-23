#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message){
  float num;
  
  cout << Message;
  cin >> num;

  return num;
}

float SumNumbers(){
  int sum = 0, num = 0, i = 1;

  do
  {
    num = ReadNumber("Enter num" + to_string(i) + " Or -99 to stop: ");
    if (num == -99)
    {
      break;
    }

    sum += num;
    i++;
  }while(num != -99);

  return sum;
}

int main() { 

  cout << SumNumbers();
  
  return 0;
}
