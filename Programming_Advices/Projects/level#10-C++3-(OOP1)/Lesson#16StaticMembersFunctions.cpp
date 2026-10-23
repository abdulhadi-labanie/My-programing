#include <iostream>
using namespace std;

class clsAddress {
private:
    string _Address;

public:
    static int counter;

    clsAddress(string Address)
    {
        _Address = Address;
        counter++;
    }

    static void printHei()
    {
        cout << "Hei" << endl;
    }

    void setAddress(string Address)
    {
        _Address = Address;
    }

    string Address()
    {
        return _Address;
    }

    ~clsAddress()
    {
        cout << "\nI am Destructor";
    }
};
int clsAddress::counter = 0;

void fun()
{
    clsAddress Address1("sdljgds");
    clsAddress Address11("sdljgds");
    clsAddress Address12("sdljgds");
    clsAddress Address112("sdljgds");
    clsAddress Address11221("sdljgds");
    clsAddress Address2131("sdljgds");
    cout << endl << clsAddress::counter << endl;
    clsAddress::counter = 20;


}

int main() {

    fun();
    cout << endl << clsAddress::counter << endl;
    clsAddress Address232131("sdljgds");
    cout << endl << clsAddress::counter << endl;

    clsAddress::printHei();

    return 0;
}
