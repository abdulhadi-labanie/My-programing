#include <iostream>
using namespace std;

int main()
{
    int num1, num2, total;


    cout << "Enter the first number: A\n";
    cin >> num1;
    
    cout << "Enter the second number: B\n";
    cin >> num2;

    total = num1 + num2;
    cout << num1 << " + " << num2 << " = " << total << endl;

    total = num1 - num2;
    cout << num1 << " - " << num2 << " = " << total << endl;

    total = num1 * num2;
    cout << num1 << " * " << num2 << " = " << total << endl;

    total = num1 / num2;
    cout << num1 << " / " << num2 << " = " << total << endl;

    total = num1 % num2;
    cout << num1 << " % " << num2 << " = " << total << endl;

    return 0;
}
