#include <iostream>
using namespace std;

struct strInfo {
    string firstName;
    string lastName;
    int age;
    string phoneNum;
};

void readInfo(strInfo& Info) {
    cout << "\n\n";

    cout << "Enter first name: ";
    cin >> Info.firstName;

    cout << "Enter last name: ";
    cin >> Info.lastName;

    cout << "Enter age: ";
    cin >> Info.age;

    cout << "Enter phone num: ";
    cin >> Info.phoneNum;

}

void printInfo(strInfo Info) {
    cout << "\n\n";

    cout << "***************************************\n";
    cout << "First name: " << Info.firstName << endl;
    cout << "last name: " << Info.lastName << endl;
    cout << "Age: " << Info.age << endl;
    cout << "Phone Number: " << Info.phoneNum << endl;
    cout << "***************************************\n\n";
}

void readAllInfo(strInfo person[2]) {
    readInfo(person[0]);
    readInfo(person[1]);
}

void printAllInfo(strInfo person[2]) {
    printInfo(person[0]);
    printInfo(person[1]);
}


int main()
{
    strInfo person[2];
    
    readAllInfo(person);
    printAllInfo(person);

    return 0;
}