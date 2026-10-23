#include <iostream>
using namespace std;

class clsEmployees
{
    string car = "BMW";

public:
    string FirstName = "Abdu";
    string LastName = "Labanie";

    string FullName()
    {
        return FirstName + " " + LastName + " " + car;
    }
};

int main()
{
    clsEmployees Employee1;

    cout << Employee1.FullName() << endl;

    return 0;
}
