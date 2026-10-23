#include <iostream>
#include <string>
using namespace std;

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
        return ((info.Age >= 21 && info.HasDrivingLicense == 1) || info.HasWstaa == 1);
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

    PrintResult(ReadInfo());

    return 0;
}
