#include <iostream>
#include <string>
using namespace std;

struct stInfo {
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo() {

    stInfo info;

    cout << "\n" << "Enter your age: ";
    cin >> info.Age;

    cout << "\n" << "Do you have drive license: ";
    cin >> info.HasDrivingLicense;

    return info;
}

bool IsAccepted(stInfo info) {

    return (info.Age >= 21 && info.HasDrivingLicense == 1);
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

    PrintResult(ReadInfo());

    return 0;
}
