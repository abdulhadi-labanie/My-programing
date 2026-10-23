#include <iostream>
using namespace std;

class clsPerson {
private:
    int Age;

protected:
    string Address;

public:
    string Name; 

    void SetAge(int NewAge) {
        if (NewAge >= 0)
            Age = NewAge;
    }

    int GetAge() {
        return Age;
    }
};

int main() {
    clsPerson P;

    P.Name = "labanie";
    //P.Age = 25;    // (private)
    P.SetAge(25);

    cout << P.GetAge(); 
}
