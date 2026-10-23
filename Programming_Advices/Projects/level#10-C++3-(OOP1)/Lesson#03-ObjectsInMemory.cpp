#include <iostream>
using namespace std;

class clsPerson
{
public:
    string FirstName;
    string LastName;
    int Age;

    string FullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1;
    clsPerson Person2;

    Person1.FirstName = "Ahmed";
    Person1.LastName = "Ali";
    Person1.Age = 25;

    Person2.FirstName = "Lara";
    Person2.LastName = "Samir";
    Person2.Age = 30;

    cout << Person1.FullName() << " - Age: " << Person1.Age << endl;
    cout << Person2.FullName() << " - Age: " << Person2.Age << endl;

    return 0;
}
