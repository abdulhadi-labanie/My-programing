#include <iostream>
using namespace std;

void SwapFunction(int &num1, int &num2) {
    
    int box;

    box = num1;
    num1 = num2;
    num2 = box;

    cout << "num1 = " << num1 << endl << "num2 = " << num2;
}



int main()
{

    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;

    SwapFunction(num1, num2);

    cout << "\n\nint main: num1 = " << num1 << endl << "int main: num2 = " << num2;
}