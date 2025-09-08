#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    return name;
}

void printName1(string name) {

    cout << "\nYour Name is: " << name << endl;

}

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


struct stInfo {
    int Age;
    bool HasDrivingLicense;
    bool HasWstaa;
};

stInfo ReadInfo() {

    stInfo info;

    cout << "Enter your age: ";
    cin >> info.Age;

    cout << "Do you have drive license: ";
    cin >> info.HasDrivingLicense;
    cout << "Do you have Wastaa : ";
    cin >> info.HasWstaa;

    return info;
}

bool IsAccepted(stInfo info) {
    if (info.HasWstaa) {
        return true;
    }
    else {
        return ((info.Age >= 21 && info.HasDrivingLicense == 1) or info.HasWstaa == 1);
    }
}

void PrintResult(stInfo info) {
    if (IsAccepted(info)) {
        cout << "\nYou are Hired!\n";
    }
    else {
        cout << "\nYou are Rejected!!\n";
    }
}

int main()
{
   
    printName1(ReadName());
    
    printNumberType(CheckNumberType(ReadNumber()));

    PrintResult(ReadInfo());

    return 0;
}