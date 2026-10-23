#include <iostream>
using namespace std;

class clsAddress {
private:
    string _Address;

public:

    clsAddress(string Address)
    {
        _Address = Address;
    }

    clsAddress(clsAddress& Add)
    {
        _Address = Add.Address();
        cout << "From copy!!";
    }

    void setAddress(string Address)
    {
        _Address = Address;
    }

    string Address()
    {
        return _Address;
    }
};

int main() {
    clsAddress Address1("sdljgds");

    clsAddress Address2(Address1);

    return 0;
}
