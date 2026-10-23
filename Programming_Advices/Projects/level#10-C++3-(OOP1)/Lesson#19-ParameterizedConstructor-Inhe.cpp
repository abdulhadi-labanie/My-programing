#include <iostream>
using namespace std;

class clsPerson {
private:
    int _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _FullName = "";
    string _Email = "";
    string _Phone = "";


public:

    clsPerson(int id, string firstName, string lastName, string email, string phone)
    {
        _ID = id;
        _FirstName = firstName;
        _LastName = lastName;
        _Email = email;
        _Phone = phone;
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

    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void setEmail(string email)
    {
        _Email = email;
    }

    string Email()
    {
        return _Email;
    }

    void setPhone(string phone)
    {
        _Phone = phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void Print()
    {
        cout << "Info:" << endl;
        cout << "-----------------------" << endl;
        cout << "ID = " << ID() << endl;
        cout << "FirstName = " << FirstName() << endl;
        cout << "LastName = " << LastName() << endl;
        cout << "FullName = " << FullName() << endl;
        cout << "Email = " << Email() << endl;
        cout << "Phone = " << Phone() << endl;
        cout << "-----------------------" << endl << endl;

    }

    void SendEmail(string Otsikko, string Text)
    {
        cout << "\nThe following email in sent email :" << _Email << endl;
        cout << "Otsikko: " << Otsikko << endl;
        cout << "Text: " << Text << endl;
    }

    void SendSMS(string Otsikko, string Text)
    {
        cout << "\nThe following SMS in sent phone :" << _Phone << endl;
        cout << "Otsikko: " << Otsikko << endl;
        cout << "Text: " << Text << endl;
    }
};

class clsEmploee : public clsPerson{
    int _salary;
    string _title;

public:
    clsEmploee(int id, string firstName, string lastName, string email, string phone, int salary, string title)
        : clsPerson(id, firstName, lastName, email, phone)
    {
        _salary = salary;
        _title = title;
    }

    void setSalary(int Salary)
    {
        _salary = Salary;
    }

    int Salary()
    {
        return _salary;
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
        cout << "Info:" << endl;
        cout << "-----------------------" << endl;
        cout << "ID = " << ID() << endl;
        cout << "FirstName = " << FirstName() << endl;
        cout << "LastName = " << LastName() << endl;
        cout << "FullName = " << FullName() << endl;
        cout << "Email = " << Email() << endl;
        cout << "Phone = " << Phone() << endl;
        cout << "Title = " << Title() << endl;
        cout << "Salary = " << Salary() << endl;
        cout << "-----------------------" << endl << endl;

        clsPerson::Print();
    }
};

int main() {

    clsEmploee emploee1(35345,"Abdulhadi", "Labanie", "abdu@gmail.commm", "45545444", 4500, "BackEnd");

    emploee1.Print();

    return 0;
}
