#include <iostream>
#include <string>
using namespace std;

struct EmployeeInfo {
    string name;
    int age;
    string phoneNum;
    string city;
};

void getEmployeeInfo(EmployeeInfo &infoIn){
    
    cout << "\nEnter name: ";
    cin.ignore(1, '\n');
    getline(cin, infoIn.name);

    cout << "Enter age: ";
    cin >> infoIn.age;

    cout << "Enter phoneNum: ";
    cin >> infoIn.phoneNum;

    cout << "Enter city: ";
    cin >> infoIn.city;

}

void printEmployeeInfo(EmployeeInfo infoUot) {

    cout << "\n\n";
    cout << "********************************************\n";
    cout << "The name is = " << infoUot.name << "\n";
    cout << "The name is = " << infoUot.age << "\n";
    cout << "The name is = " << infoUot.phoneNum << "\n";
    cout << "The name is = " << infoUot.city << "\n";
    cout << "********************************************\n";

}

int main()
{
    EmployeeInfo Employee1, Employee2;

    getEmployeeInfo(Employee1);
    printEmployeeInfo(Employee1);

    getEmployeeInfo(Employee2);
    printEmployeeInfo(Employee2);

    return 0;
}