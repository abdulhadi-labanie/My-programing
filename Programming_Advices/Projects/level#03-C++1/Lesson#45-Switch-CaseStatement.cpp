#include <iostream>
using namespace std;

int main() {
    int num1, num2, total3;
    char calcu;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter calcu: ";
    cin >> calcu;

    switch (calcu) {
    case '+':
        total3 = num1 + num2;
        cout << "\npresin = " << total3;
        break;
    
    case '-':
        total3 = num1 - num2;
        cout << "\npresin = " << total3;
    
    case '*':
        total3 = num1 * num2;
        cout << "\npresin = " << total3;
    
    case '/':
        total3 = num1 / num2;
        cout << "\npresin = " << total3;
    
    default: 
        cout << "\Enter (+, -, *, /)!!!";
    }

    return 0;
}