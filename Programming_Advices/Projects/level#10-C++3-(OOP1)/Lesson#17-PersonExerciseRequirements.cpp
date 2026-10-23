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
        cout << "ID = " << FirstName() << endl;
        cout << "ID = " << LastName() << endl;
        cout << "ID = " << FullName() << endl;
        cout << "ID = " << Email() << endl;
        cout << "ID = " << Phone() << endl;
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

int main() {
    clsPerson person1(33, "Abdulhadi", "Labanie", "abddsgl@gmail.com", "444444444");

    person1.Print();

    person1.SendEmail("Hei", "Email message");
    person1.SendSMS("Hei", "SMS message");

    cout << endl << endl;

    return 0;
}
