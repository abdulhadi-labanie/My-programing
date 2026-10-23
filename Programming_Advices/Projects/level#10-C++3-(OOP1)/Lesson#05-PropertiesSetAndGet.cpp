#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _first_name;
    string _last_name;
    short _age;

public:
    void setFirstName(string FirstName)
    {
        if (FirstName != "")
            _first_name = FirstName;
    }

    string FirstName()
    {
        return _first_name;
    }

    void setLastName(string LastName)
    {
        if (LastName != "")
            _last_name = LastName;
    }

    string LastName()
    {
        return _last_name;
    }

    void setAge(short Age)
    {
        if (Age > 0 || Age < 120)
            _age = Age;
    }

    short Age()
    {
        return _age;
    }
};

int main() {
    clsPerson Person;

    Person.setFirstName("Abdulhadi");
    Person.setLastName("Labanie");
    Person.setAge(21);

    cout << "Full Name:" << Person.FirstName() + " " + Person.LastName() << endl;
    cout << "Age: " << Person.Age() << endl;

    return 0;
}
