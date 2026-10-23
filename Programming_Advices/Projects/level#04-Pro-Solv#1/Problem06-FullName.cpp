#include <iostream>
using namespace std;

struct stInfo{
    string FirstName;
    string LastName;
};


stInfo ReadInfo(){
  stInfo info;
  
  cout << "Enter First Name: ";
  cin >> info.FirstName;
  
  cout << "Enter Last Name: ";
  cin >> info.LastName;

  return info;
}

string GetFullName(stInfo info, bool reversed){
  string fullname="";
  
  if (reversed)
    fullname = info.LastName + " " + info.FirstName;
  else
    fullname = info.FirstName + " " + info.LastName;
  
  return fullname;
}

void PrintFullName(string fullname){
  cout << "\nYour name is : " << fullname << endl;
}

int main() { 

  PrintFullName(GetFullName(ReadInfo(), true));

  return 0;
}
