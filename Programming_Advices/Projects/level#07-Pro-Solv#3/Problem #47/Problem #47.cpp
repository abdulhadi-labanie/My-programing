#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stBankData
{
    string UserNumber;
    string PinCode;
    string Name;
    string Phone;
    string Balance;
};

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

void VectorBankData(vector <stBankData>& vBankData)
{
    stBankData clientData = FillBankData();
    vBankData.push_back(clientData);  
}

string RecordToLine(stBankData client, string Delim = "#//#") {
    return client.UserNumber + Delim +
        client.PinCode + Delim +
        client.Name + Delim +
        client.Phone + Delim +
        client.Balance;
}

vector<string> JoinResultString(vector<stBankData>& vString, string Delim)
{
    vector<string> FullResult;

    for (stBankData& client : vString)
    {
        FullResult.push_back(RecordToLine(client, Delim));
    }

    return FullResult;
}

void WriteClientDataInFile(string fileName, vector<stBankData>& clients, string Delim)
{
    fstream MyFile(fileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        vector<string> records = JoinResultString(clients, Delim);

        for (string& line : records)
        {
            MyFile << line << endl;
        }

        MyFile.close();
        cout << "Data written to file successfully.\n";
    }
    else
    {
        cout << "Error opening file!!!\n";
    }
}

char TrueOrFalse(string text)
{
    char result;

    cout << text;
    cin >> result;

    result = tolower(result);
    return result;
}

void StartWritingDataInFile()
{
    char WantToAddMore = 'y';

    do
    {
        stBankData clientData = FillBankData();

        vector<stBankData> vSingleClient;
        vSingleClient.push_back(clientData);

        WriteClientDataInFile("clients.txt", vSingleClient, "#//#");

        WantToAddMore = TrueOrFalse("\nDo you want to add more clients (y/n): ");

    } while (WantToAddMore == 'y' || WantToAddMore == '1');
}

int main()
{

    StartWritingDataInFile();

    return 0;
}