#include <iostream>
#include <cmath>
using namespace std;

int ReadNumberInRange()
{
  int grade;

  do{
    
  cout << "Enter your grade: ";
  cin >> grade;

  }while(grade <= 0 || grade >= 100);

  return grade;
}

char GetGradeLetter(int grade)
{

  if (grade >= 90)
    return 'A';
  else if (grade >= 80)
    return 'B';
  else if (grade >= 70)
    return 'C';
  else if (grade >= 60)
    return 'D';
  else if (grade >= 50)
    return 'E';
  else
    return 'F';
}

int main() { 

  int grade = ReadNumberInRange();
  
  char letterGrade = GetGradeLetter(grade);

  cout << "Result = " << letterGrade << endl;
  
  return 0;
}
