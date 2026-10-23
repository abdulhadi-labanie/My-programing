#include <iostream>
#include <string>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() {
    int num;

    cout << "\nEnter a number: ";
    cin >> num;

    return num;
}

enNumberType CheckNumberType(int num) {
    int result = num % 2;

    if (result == 0) {
        return enNumberType::Even;
    }
    else {
        return enNumberType::Odd;
    }
}

void printNumberType(enNumberType NumberType) {
    if (NumberType == enNumberType::Even) {
        cout << "\nThe number is Even.\n";
    }
    else {
        cout << "\nThe number is Odd.\n";
    }
}

int main()
{

    printNumberType(CheckNumberType(ReadNumber()));

    return 0;
}
