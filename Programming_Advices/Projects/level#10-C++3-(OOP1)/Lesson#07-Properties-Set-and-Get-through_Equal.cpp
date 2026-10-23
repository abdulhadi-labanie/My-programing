#include <iostream>
using namespace std;

class clsPerson {
private:
    string Name;

public:

    // ---- Normal Property ----
    void SetName(string newName) {
        Name = newName;
    }

    string GetName() {
        return Name;
    }

    __declspec(property(get = GetName, put = SetName)) string FirstName;
};

int main() {

    clsPerson Person1;

    Person1.FirstName = "Abdulhadi";
    cout << "First Name: " << Person1.FirstName << endl;


    return 0;
}
