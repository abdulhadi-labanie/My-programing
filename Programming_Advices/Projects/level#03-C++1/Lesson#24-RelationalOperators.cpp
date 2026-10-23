#include <iostream>
using namespace std;

int main()
{
    short num1, num2;

    cout << "Enter the first number A:\n";
    cin >> num1;

    cout << "Enter the second number B:\n";
    cin >> num2;

    cout << endl << num1 << " = " << num2 << " is " << (num1 == num2) << "\n";
    cout << num1 << " != " << num2 << " is " << (num1 != num2) << "\n";
    cout << num1 << " > " << num2 << " is " << (num1 > num2) << "\n";
    cout << num1 << " < " << num2 << " is " << (num1 < num2) << "\n";
    cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << "\n";
    cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << "\n";

    return 0;
}