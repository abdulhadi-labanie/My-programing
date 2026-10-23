#include <iostream>
#include <string>
using namespace std;


int main()
{

    string name, str2, str3;

    cout << "Enter name:";
    getline(cin, name);

    cout << "Enter str2:";
    getline(cin, str2);

    cout << "Enter str3:";
    getline(cin, str3);

    cout << "--------------------------------------------" << endl;

    cout << "The length of string name is : " << name.length() << endl;
    cout << "Characters at 0,2,4,7 : " << name[0] << name[2] << name[4] << name[7] << endl;
    cout << "str2 abd str3 : " << str2 + str3 << endl;
    cout << str2 << " * " << str3 << " = " << (stoi(str2) * stoi(str3)) << endl;


    return 0;
}