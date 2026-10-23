#include <iostream>
#include <string>

using namespace std;

class clsPerson {
private:

    int _ID = 0;
    string _FirstName = "";

protected:
    int Age = 0;

public:

    clsPerson(int id, string firstName)
    {
        _ID = id;
        _FirstName = firstName;
    }

    friend class clsEmployee;
};

class clsEmployee : public clsPerson{
    int _salary;
    string _title;

public:
    clsEmployee(int id,string firstName, string title)
        : clsPerson(id, firstName)
    {
        _title = title;
    }

    void setTitle(string Title)
    {
        _title = Title;
    }

    string Title()
    {
        return _title;
    }

    void Print()
    {
        cout << "Info: Employee" << endl;
    }

    int ReturnSalary()
    {
        return 3333;
    }

    void getFriend(clsPerson p1)
    {
        cout << p1._ID << endl << p1.Age << endl;
    }
};


int main() {
    clsPerson p1(0, "11");
    clsEmployee Employee1(32532,"Abdu","cec");

    Employee1.Print();


    cout << Employee1.ReturnSalary();

    Employee1.getFriend(p1);

    Employee1.Print();

    return 0;
}
