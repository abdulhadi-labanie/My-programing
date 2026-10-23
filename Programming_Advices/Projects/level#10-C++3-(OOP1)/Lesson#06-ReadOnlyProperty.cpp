#include <iostream>
using namespace std;

class clsPerson {
private:
    int ID;          // Read Only
    string Name;

public:

    clsPerson(int id, string name) {
        ID = id;
        Name = name;
    }

    // ---- Read Only Property ----
    int GetID() {
        return ID;
    }

    // ---- Normal Property ----
    void SetName(string newName) {
        Name = newName;
    }

    string GetName() {
        return Name;
    }
};

int main() {

    clsPerson Person1(1001, "Mohammed");

    cout << "ID: " << Person1.GetID() << endl;
    cout << "Name: " << Person1.GetName() << endl;

    // there is not SetID()
    // Person1.ID = 5000;       // no accsess
    // Person1.SetID(5000);

    return 0;
}
