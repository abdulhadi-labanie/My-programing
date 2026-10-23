#include <iostream>
using namespace std;



int main()
{

    int age;
    bool driver;

    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have driver license: ";
    cin >> driver;

    if (age >= 20 && driver == 1) {
        cout << "\nHired!!\n";
    }
    else
    {
        cout << "\nRejected!!!\n";
    }

    if (age <= 45 && age >= 18) {
        cout << "\nValid age..\n\n";
    }
    else {
        cout << "\nInvalid age..\n\n";
    }

    return 0;
}