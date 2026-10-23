#include <iostream>
using namespace std;

enum enPassFile {pass = 1, file = 2};

int ReadMark(){
  int Mark;

  cout << "Enter your mark: ";
  cin >> Mark;

  return Mark;
}

enPassFile CheckMark(int Mark){
  if (Mark > 50)
    return enPassFile::pass;
  else
    return enPassFile::file;
}

void PrintMark(int Mark){
  if (CheckMark(Mark) == enPassFile::pass)
     cout << "\nYou are Pass!";
  else
    cout << "\nYou are File!!";
}

int main() { 

  PrintMark(ReadMark());

  return 0;
}
