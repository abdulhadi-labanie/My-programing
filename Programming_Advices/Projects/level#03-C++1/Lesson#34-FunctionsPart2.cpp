#include <iostream>
using namespace std;

void SumProcedure() {
    int num1, num2;

    cout << "Please Enter Number1:\n";
    cin >> num1;

    cout << "Please Enter Number2:\n";
    cin >> num2;

    cout << "************************************\n";
    cout << num1 + num2 << "\n\n";
}

int SumFunction() {
    int num1, num2;

    cout << "Please Enter Number1:\n";
    cin >> num1;

    cout << "Please Enter Number2:\n";
    cin >> num2;

    cout << "************************************\n";
    return num1 + num2;
}


int main()
{

    SumProcedure();
    cout << SumFunction();

    return 0;
}