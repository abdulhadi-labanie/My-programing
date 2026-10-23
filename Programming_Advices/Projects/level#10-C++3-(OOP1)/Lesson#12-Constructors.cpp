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



    return 0;
}
