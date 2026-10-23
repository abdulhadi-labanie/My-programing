#include <iostream>
#include <cmath>
using namespace std;


float ReadPositiveNumber(string Message){
  float num;
  do
  {
    cout << Message;
    cin >> num;
  }while (num < 0);
    
  return num;
}

float HoursToDays(float NumberOfHours)
{
  return (float) NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
  return (float) NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
  return (float) NumberOfDays / 7;
}

int main() { 

  float NumberOfHours = ReadPositiveNumber("Enter Number Of Hours: ");
  float NumberOfDays = HoursToDays(NumberOfHours);


  cout << endl << "Total Hours = " << NumberOfHours << endl;
  cout << endl << "Total Days = " << NumberOfDays << endl;
  cout << endl << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

  
  return 0;
}
