#include <iostream>
using namespace std;

class clsPerson {

private:
    int Age;
    string Name;

public:

    // Setters
    void SetName(string NewName) {
        if (NewName != "")
            Name = NewName;
    }

    void SetAge(int NewAge) {
        if (NewAge >= 0 && NewAge <= 120)
            Age = NewAge;
    }

    // Getters
    string GetName() {
        return Name;
    }

    int GetAge() {
        return Age;
    }
};

int main() {

    clsPerson Person1;

    Person1.SetName("Ali");
    Person1.SetAge(30);

    cout << "Name: " << Person1.GetName() << endl;
    cout << "Age: " << Person1.GetAge() << endl;

    return 0;
}
