#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stBankData
{
    string UserNumber;
    string PinCode;
    string Name;
    string Phone;
    string Balance;
};

short ReadNumber(string text)
{
    short num;

    cout << text;
    cin >> num;

    return num;
}

stBankData FillBankData()
{
    stBankData clientData;

    cout << "Enter Account Number: ";
    cin >> clientData.UserNumber;

    cout << "Enter PinCode: ";
    cin >> clientData.PinCode;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, clientData.Name);

    cout << "Enter Phone number: ";
    cin >> clientData.Phone;

    cout << "Enter Account balance: ";
    cin >> clientData.Balance;

    return clientData;
}

 void VectorBankData(vector <stBankData> &vBankData, short vLen = 1)
{
     for (short i = 1; i <= vLen; i++)
     {
         stBankData clientData = FillBankData();
         vBankData.push_back(clientData);
     }
}

string RecordToLine(stBankData client, string Delim = "#//#") {
    return client.UserNumber + Delim +
        client.PinCode + Delim +
        client.Name + Delim +
        client.Phone + Delim +
        client.Balance;
}

string JoinString(vector<stBankData> vString, string Delim)
{
    string S1 = "";
    for (stBankData& clien : vString)
    {
        S1 += RecordToLine(clien, Delim) + "\n";

    }

    return S1.substr(0, S1.length() - Delim.length());
}


int main()
{
    vector <stBankData> vBankClients;
    //short CliensNumbers = ReadNumber("Please enter a Cliens Numbers want to fill: ");

    vBankClients.push_back({ "A150", "1234", "Mohammed Abu-Hadhoud", "0799399999", "5000.00" });

    VectorBankData(vBankClients);

    string allClients = JoinString(vBankClients, "#//#");
    cout << allClients;


    return 0;
}
