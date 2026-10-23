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

vector <string> vDataLine;
vector <sClient> vClients;

void ReadDataLineOfFile(string FileName, vector <string>& vDataLine)
{
    fstream File;
    File.open(FileName, ios::in);

    if (File.is_open())
    {
        string Line;

        while (getline(File, Line))
        {
            if (Line != "")
                vDataLine.push_back(Line);
        }

        File.close();
    }
} 

sClient SpiltLineString(string DataLine, string delim)
{
    sClient Client;
    short count = 1;
    size_t pos = 0;

    while ((pos = DataLine.find(delim)) != string::npos)
    {
        if (count == 1)
        {
            Client.AccountNumber = DataLine.substr(0, pos);
            DataLine.erase(0, pos + delim.length());
            count++;
        }
        else if (count == 2)
        {
            Client.PinCode = DataLine.substr(0, pos);
            DataLine.erase(0, pos + delim.length());
            count++;
        }
        else if (count == 3)
        {
            Client.Name = DataLine.substr(0, pos);
            DataLine.erase(0, pos + delim.length());
            count++;
        }
        else if (count == 4)
        {
            Client.Phone = DataLine.substr(0, pos);
            DataLine.erase(0, pos + delim.length());
            count++;
        }
        else if (count == 5)
        {
            Client.AccountBalance = stod(DataLine.substr(0, pos));
            DataLine.erase(0, pos + delim.length());
        }

    }

    if (DataLine != "")
    {
        Client.AccountBalance = stod(DataLine.substr(0, pos));
        DataLine.erase(0, pos + delim.length());
    }

    return Client;
}

void FillAllClientsInVector(string delim)
{
    for (short i = 0; i < vDataLine.size(); i++)
    {
        vClients.push_back(SpiltLineString(vDataLine.at(i), delim));
    }
}

void PrintClientRecord(sClient Client)
{
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintAllClientsData()
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
        cout <<
        "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout <<
        "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    for (sClient Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }
    cout <<
        "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

int main()
{
    ReadDataLineOfFile(ClientsFileName, vDataLine);

    FillAllClientsInVector("#//#");

    PrintAllClientsData();

    return 0;
}