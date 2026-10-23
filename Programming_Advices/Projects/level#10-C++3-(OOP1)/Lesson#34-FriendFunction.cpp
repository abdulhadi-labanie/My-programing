#include <iostream>
#include <string>

using namespace std;

class clsPerson {
private:

    int _ID = 0;
    string _FirstName = "";

protected:
    int Age = 10;

public:

    clsPerson(int id, string firstName)
    {
        _ID = id;
        _FirstName = firstName;
    }

    friend int sumIdAndAge(clsPerson p1);
};

int sumIdAndAge(clsPerson p1)
{
    return p1._ID + p1.Age;
}

int main() {
    clsPerson Employee1(32532,"Abdu");

    cout << sumIdAndAge(Employee1);



    return 0;
}
