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


    void Print()
    {
        cout << "Info:" << endl;
        cout << "-----------------------" << endl;
        cout << "ID = " << ID() << endl;
        cout << "FirstName = " << FirstName() << endl;
        cout << "-----------------------" << endl << endl;

    }

};

class clsEmploee : public clsPerson{
    int _salary;
    string _title;

public:
    clsEmploee(int id,string firstName, string title)
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


};


int main() {
    clsEmploee Employee1(32532,"Abdu","cec");

    clsPerson* Person1 = &Employee1;

    Person1->Print();

    return 0;
}
