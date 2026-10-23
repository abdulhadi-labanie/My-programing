#include <iostream>
using namespace std;

class clsPerson
{
private:
    int SecretCode; // Private Data Member

public:
    string FirstName;   // Public Data Member
    string LastName;    // Public Data Member

    // Public Member Function
    string FullName()
    {
        return FirstName + " " + LastName;
    }

    // Member Function
    void SetSecretCode(int Code)
    {
        SecretCode = Code;
    }

    // Member Function
    int GetSecretCode()
    {
        return SecretCode;
    }
};

int main()
{
    clsPerson Person1;

    Person1.FirstName = "Mohammed";
    Person1.LastName = "lab";

    Person1.SetSecretCode(1234);

    cout << Person1.FullName() << endl;
    cout << "Secret Code: " << Person1.GetSecretCode() << endl;

    return 0;
}
