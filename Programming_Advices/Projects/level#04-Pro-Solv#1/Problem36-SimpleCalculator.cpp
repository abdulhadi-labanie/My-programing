#include <iostream>
#include <cmath>
using namespace std;

enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadOpNumber(string Message)
{
  float num = 0;

  cout << Message;
  cin >> num;

  return num;
}

enOperationType ReadOpType()
{
  char OT = '+';
  
  cout << "Please enter Operation Type: ";
  cin >> OT;

  return (enOperationType) OT;
}

float Calculate(float num1, float num2, enOperationType OpType)
{
  switch (OpType)
  {
    case enOperationType::Add:
      return num1 + num2;
    case enOperationType::Subtract:
      return num1 - num2;
    case enOperationType::Multiply:
      return num1 * num2;
    case enOperationType::Divide:
      return num1 / num2;
    default:
      return num1 + num2;
  }

}

int main() { 

  float num1 = ReadOpNumber("Enter num1: ");
  float num2 = ReadOpNumber("Enter num2: ");

  enOperationType OpType = ReadOpType();

  cout << endl << "Result = " << Calculate(num1, num2, OpType) << endl;
  
  return 0;
}
