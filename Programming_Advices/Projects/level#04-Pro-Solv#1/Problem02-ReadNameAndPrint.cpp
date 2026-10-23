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


int main()
{
    
    printName1(ReadName());

    return 0;
}
