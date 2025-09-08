#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;
        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }
    return vClients;
}

string ReadSTR(string text)
{
    string Input;

    cout << text;
    getline(cin, Input);

    return Input;
}

void PrintClientRecord(sClient Client)
{
    cout << "Accout Number  : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
}

void PrintResultClientsData(vector<sClient> vClients)
{
    string Input = ReadSTR("Please enter Account Number: ");
    bool isFound = false;

    for (sClient Client : vClients)
    {
        if (Client.AccountNumber == Input)
        {
            cout << "\n\nThe following are the client details:\n\n";
            PrintClientRecord(Client);
            cout << endl;

            isFound = true;
            break;
        }

    }

    if (isFound == false)
    {
            cout << "\nClient with Account Number (" << Input << ") Not Found!!!\n";
    }
}

int main()
{
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    PrintResultClientsData(vClients);


    system("pause>0");

    return 0;
}