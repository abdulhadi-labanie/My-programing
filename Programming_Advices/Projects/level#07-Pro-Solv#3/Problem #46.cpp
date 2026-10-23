#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct sBankData
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector <string> SpiltString(string str, string delim)
{
    vector <string> STRWords;
    short pos = 0;
    string word;

    while ((pos = str.find(delim)) != string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            STRWords.push_back(word);
        }
        str.erase(0, pos + delim.length());
    }

    if (str != "")
    {
        STRWords.push_back(str);
    }

    return STRWords;
}

sBankData ClientData(string stLine, string Seperator = "#//#")
{
    sBankData ClientData;
    vector <string> vClientData;

    vClientData = SpiltString(stLine, Seperator);

    ClientData.AccountNumber = vClientData[0];
    ClientData.PinCode = vClientData[1];
    ClientData.Name = vClientData[2];
    ClientData.Phone = vClientData[3];
    ClientData.AccountBalance = stod(vClientData[4]);
    
    return ClientData;
}

void PrintClientRecord(sBankData Client)
{
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code : " << Client.PinCode;
    cout << "\nName : " << Client.Name;
    cout << "\nPhone : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main()
{
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

    cout << "\nLine Record is:\n";
    cout << stLine;

    sBankData Client = ClientData(stLine, "#//#");

    PrintClientRecord(Client);

    return 0;
}