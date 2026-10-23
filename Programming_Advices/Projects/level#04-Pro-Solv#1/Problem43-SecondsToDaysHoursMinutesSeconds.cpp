#include <iostream>
#include <cmath>
using namespace std;

struct strTaskDuration
{
  int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message){
  int num;
  do
  {
    cout << Message;
    cin >> num;
  }while (num < 0);
    
  return num;
}


strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
  strTaskDuration TaskDurtion;
  const int SecondsPerDay = 24 * 60 * 60;
  const int SecondsPerHour = 60 * 60;
  const int SecondsPerMinute = 60; 

  int Remainder = 0;
  TaskDurtion.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
  Remainder = TotalSeconds % SecondsPerDay;
  TaskDurtion.NumberOfHours = floor(Remainder / SecondsPerHour);
  Remainder = Remainder % SecondsPerHour;
  TaskDurtion.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
  Remainder = Remainder % SecondsPerMinute;
  TaskDurtion.NumberOfSeconds = Remainder;
  
  return TaskDurtion;
}

void PrintTaskDurationDetaile(strTaskDuration TaskDuration)
{
  cout << endl;
  cout << TaskDuration.NumberOfDays << ":"
       << TaskDuration.NumberOfHours << ":"
       << TaskDuration.NumberOfMinutes << ":"
       << TaskDuration.NumberOfSeconds;
}

int main() { 
  
  int totalsecondas = ReadPositiveNumber("Enter total seconds: ");
  
  PrintTaskDurationDetaile(SecondsToTaskDuration(totalsecondas));
  
  return 0;
}
