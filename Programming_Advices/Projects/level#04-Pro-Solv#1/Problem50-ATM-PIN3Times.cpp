#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code: ";
    cin >> PinCode;
    
    return PinCode;
}

bool Login()
{
    string PinCode;
    int counter = 3; // Number of allowed attempts
    
    do
    {
        counter--;
        PinCode = ReadPinCode();
        
        if (PinCode == "1234") // Correct PIN code
        {
            return true;
        }
        else
        {
            // On wrong PIN attempt
            // system("color 4f"); // Red screen for error (Windows only)
            cout << "\nWrong PIN Code, you have " << counter << " more try/tries.\n";
        }
        
    } while (PinCode != "1234" && counter > 0); // Repeat until correct or out of attempts
    
    return false; // Return false if failed after 3 tries
}

int main()
{
    if (Login())
    {
        // On successful login
        // system("color 2f"); // Green screen for success (Windows only)
        cout << "\nLogin successful! Your account balance is $7500.\n";
    }
    else
    {
        // On failure after 3 attempts
        cout << "\nYour card is blocked. Please call the bank for help.\n";
    }
    
    return 0;
}
