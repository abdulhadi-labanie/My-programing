#include <iostream>
#include <string>

using namespace std;

class clsPerson {
private:
    int _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _FullName = "";
    string _Email = "";
    string _Phone = "";

protected:
    int Age;

public:

    clsPerson(int id, string firstName)
    {
        _ID = id;
        _FirstName = firstName;
    }

    int ID()
    {
        return _ID;
    }

    void setFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    string FirstName()
    {
        return _FirstName;
    }


    virtual void Print()
    {
        cout << "Info: Main" << endl;
    }

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

};


int main() {
    clsEmployee Employee1(32532,"Abdu","cec");

    Employee1.Print();

    clsPerson* Person1 = &Employee1;
    Person1->Print();

    return 0;
}
