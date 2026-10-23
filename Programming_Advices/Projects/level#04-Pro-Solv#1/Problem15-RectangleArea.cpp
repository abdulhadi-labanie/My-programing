#include <iostream>
using namespace std;

void ReadNums(int &width, int &length){
  cout << "\nEnter rectangle width: ";
  cin >> width;

  cout << "Enter rectangle length: ";
  cin >> length;
  
}

int CalculateRectangleArea(int &width, int &length){
  return width * length;
}

void printNums(int Area){
  cout << "\nThe Area is = " << Area << endl;
}

int main() { 

  int width, length;

  ReadNums(width, length);
  printNums(CalculateRectangleArea(width, length));

  return 0;
}
