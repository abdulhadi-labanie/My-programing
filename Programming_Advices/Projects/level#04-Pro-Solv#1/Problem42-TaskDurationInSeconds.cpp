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

strTaskDuration ReadTaskDuration()
{
  strTaskDuration TaskDuration;

  TaskDuration.NumberOfDays = ReadPositiveNumber("Enter number of days: ");
  TaskDuration.NumberOfHours = ReadPositiveNumber("Enter number of Hours: ");
  TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter number of Minutes: ");
  TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter number of Seconds: ");

  return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
  int DurationInSeconds = 0;

  DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
  DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
  DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
  DurationInSeconds += TaskDuration.NumberOfSeconds;

  return DurationInSeconds;
}

int main() { 
  
  int totalsecondas = TaskDurationInSeconds(ReadTaskDuration());
  
  cout << "\nTask Duration in secondas: " << totalsecondas ;
  
  return 0;
}
