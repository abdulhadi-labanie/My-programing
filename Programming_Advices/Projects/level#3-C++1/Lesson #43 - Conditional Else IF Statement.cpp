#include <iostream>
using namespace std;


int main()
{
    // code 1

    int ave;

    cout << "Enter ave: ";
    cin >> ave;

    if (ave >= 90) {
        cout << "A\n\n";
    }
    else if (ave >=80) {
        cout << "B\n\n";
    }
    else if (ave >= 70) {
        cout << "C\n\n";
    }
    else if (ave >= 60) {
        cout << "D\n\n";
    }
    else if (ave >= 50) {
        cout << "E\n\n";
    }
    else {
        cout << "F\n\n";
    }

    // code 2

    int totalsales, presin;

    cout << "Enter totalsales: ";
    cin >> totalsales;

    if (totalsales > 1000000) {
        presin = totalsales * 0.01;
        cout << "\npresin = " << presin;
    }
    else if (totalsales > 500000) {
        presin = totalsales * 0.02;
        cout << "\npresin = " << presin;
    }
    else if (totalsales > 100000) {
        presin = totalsales * 0.03;
        cout << "\npresin = " << presin;
    }
    else if (totalsales > 50000) {
        presin = totalsales * 0.05;
        cout << "\npresin = " << presin;
    }
    else {
        presin = totalsales * 0;
        cout << "\npresin = " << presin;
    }

    cout << "\n\n";
    // code 3

    float num1, num2, total3;
    char calcu;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter calcu: ";
    cin >> calcu;

    if (calcu == '+') {
        total3 = num1 + num2;
        cout << "\npresin = " << total3;
    }
    else if (calcu == '-') {
        total3 = num1 - num2;
        cout << "\npresin = " << total3;
    }
    else if (calcu == '*') {
        total3 = num1 * num2;
        cout << "\npresin = " << total3;
    }
    else if (calcu == '/') {
        total3 = num1 / num2;
        cout << "\npresin = " << total3;
    }
    else {
        cout << "\Enter (+, -, *, /)!!!";
    }

    return 0;
}
