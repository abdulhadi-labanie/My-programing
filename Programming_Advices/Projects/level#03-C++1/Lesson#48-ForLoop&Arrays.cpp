#include <iostream>
using namespace std;

struct strInfo {
    string firstName;
    string lastName;
    int age;
    string phoneNum;
};

void readInfo(strInfo& Info) {
    cout << "\n";

    cout << "Enter first name: ";
    cin >> Info.firstName;

    cout << "Enter last name: ";
    cin >> Info.lastName;

    cout << "Enter age: ";
    cin >> Info.age;

    cout << "Enter phone num: ";
    cin >> Info.phoneNum;
    cout << "\n";
}

void printInfo(strInfo Info) {
    cout << "\n";

    cout << "***************************************\n";
    cout << "First name: " << Info.firstName << endl;
    cout << "last name: " << Info.lastName << endl;
    cout << "Age: " << Info.age << endl;
    cout << "Phone Number: " << Info.phoneNum << endl;
    cout << "***************************************\n\n";
}

void readAllInfo(strInfo person[100], int &length) {
    for (int i = 0; i <= length-1; i++) {
        readInfo(person[i+1]);
    }

}

void printAllInfo(strInfo person[100], int length) {
    for (int i = 0; i <= length-1; i++) {
        cout << "person (" << i << ")";
        printInfo(person[i+1]);
    }
}


int main()
{
    strInfo person[100];
    int length;

    cout << "Enter who mach persons you enter: ";
    cin >> length;
    cout << "\n*********************************************************\n";

    readAllInfo(person, length);
    printAllInfo(person, length);

    return 0;
}