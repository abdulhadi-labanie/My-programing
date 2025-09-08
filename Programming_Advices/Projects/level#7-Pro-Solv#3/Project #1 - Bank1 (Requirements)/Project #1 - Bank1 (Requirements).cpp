#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

enum enAction { ShowList = 1, AddNewClient = 2, DeleteClient = 3, UpdateClient = 4, FindClient = 5, Exit = 6, RewriteAll = 7, AddOnly = 8 };

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

vector<string> ReadFileOfStirngLine(string fileName) {
    vector<string> StringLine;
    fstream file;
    file.open(fileName, ios::in);

    if (file.is_open()) {
        string Line;
        while (getline(file, Line)) {
            if (Line != "") {
                StringLine.push_back(Line);
            }
        }
        file.close();
    }
    else {
        cout << "Error file does not open!!\n\n";
    }
    return StringLine;
}

vector<string> SplitString(const string& StringLine, const string& delim) {
    string lineCopy = StringLine;
    vector<string> Words;
    string word = "";
    size_t pos;

    while ((pos = lineCopy.find(delim)) != std::string::npos) {
        word = lineCopy.substr(0, pos);
        Words.push_back(word);
        lineCopy.erase(0, pos + delim.length());
    }
    if (lineCopy != "")
        Words.push_back(lineCopy);

    return Words;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#") {
    sClient Client;
    vector<string> vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

vector<sClient> StoregeClientsData(string fileName) {
    vector<sClient> ClientsData;
    vector<string> StringLine = ReadFileOfStirngLine(fileName);

    for (string& line : StringLine) {
        ClientsData.push_back(ConvertLinetoRecord(line));
    }

    return ClientsData;
}

void WriteClientsToFile(string fileName, vector<sClient>& vClients, enAction Mode = RewriteAll) {
    fstream file;

    if (Mode == RewriteAll)
        file.open(fileName, ios::out | ios::trunc);
    else
        file.open(fileName, ios::app);

    if (file.is_open()) {
        for (sClient& client : vClients) {
            if (Mode == RewriteAll) {
                if (!client.MarkForDelete)
                    file << ConvertRecordToLine(client) << endl;
            }
            else {
                file << ConvertRecordToLine(client) << endl;
            }
        }
        file.close();
    }
}

void PrintClientRecord(sClient Client) {
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintClientCard(sClient Client) {
    cout << "\nClient Details:\n";
    cout << "---------------------------------------\n";
    cout << "Account Number  : " << Client.AccountNumber << endl;
    cout << "Pin Code        : " << Client.PinCode << endl;
    cout << "Name            : " << Client.Name << endl;
    cout << "Phone           : " << Client.Phone << endl;
    cout << "Account Balance : " << Client.AccountBalance << endl;
    cout << "---------------------------------------\n";
}

void ShowAllClientsScreen(string fileName) {
    vector<sClient> vClients = StoregeClientsData(fileName);

    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    for (sClient Client : vClients) {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

sClient* FindClientByAccountNumber(vector<sClient>& vClients, const string& AccountNumber) {
    for (sClient& client : vClients) {
        if (client.AccountNumber == AccountNumber) {
            return &client;
        }
    }
    return nullptr;
}

bool IsAvailable(vector<sClient>& vClients, sClient UserInput) {
    return FindClientByAccountNumber(vClients, UserInput.AccountNumber) != nullptr;
}

sClient ChangeClientRecord(sClient& Client, bool IsUpdate = false) {
    if (!IsUpdate)
    {
        cout << "\nEnter Account Number: ";
        getline(cin >> ws, Client.AccountNumber);
    }

    cout << "Enter PinCode: ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name: ";
    getline(cin >> ws, Client.Name);

    cout << "Enter Phone: ";
    getline(cin >> ws, Client.Phone);

    cout << "Enter Account Balance: ";
    while (!(cin >> Client.AccountBalance)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Enter a numeric Account Balance: ";
    }

    return Client;
}

void PrintBordar(string word) 
{
    cout << "\n----------------------------------------------------------\n";
    cout << "\t\t" << word << " Clients Screen";
    cout << "\n----------------------------------------------------------\n";
    cout << word << "Client:\n\n";
}

void ShowAddNewClientsScreen(string fileName, vector<sClient>& vClients) {
    bool ContinueAdding = true;
    char UserChoice;

    do {
        PrintBordar("Adding New");

        sClient AddClient;
        AddClient = ChangeClientRecord(AddClient, false);

        if (!IsAvailable(vClients, AddClient)) {
            vClients.push_back(AddClient);

            WriteClientsToFile(fileName, vClients);

            cout << "\nClient added successfully. Do you want to add another? (Y/N or 1/0): ";
            cin >> UserChoice;

            ContinueAdding = (tolower(UserChoice) == 'y' || UserChoice == '1');
        }
        else {
            cout << "\nClient with [" << AddClient.AccountNumber << "] already exists, please try another Account Number.\n\n";
        }

    } while (ContinueAdding);
}

void ShowDeleteClientScreen(string fileName, vector<sClient>& vClients) {
    PrintBordar("Delete");

    string AccountNumberToDelete;
    cout << "\nPlease enter Account Number to delete: ";
    getline(cin >> ws, AccountNumberToDelete);

    sClient* pClient = FindClientByAccountNumber(vClients, AccountNumberToDelete);

    if (pClient != nullptr) {
        PrintClientCard(*pClient);

        char confirm;
        cout << "\n\nAre you sure you want to delete this client? (y/n): ";
        cin >> confirm;

        if (tolower(confirm) == 'y') {
            pClient->MarkForDelete = true;
            WriteClientsToFile(fileName, vClients, RewriteAll);
            cout << "\nClient deleted successfully.\n";
        }
        else {
            cout << "\nDeletion cancelled.\n";
        }
    }
    else {
        cout << "\nClient with Account Number [" << AccountNumberToDelete << "] was not found.\n";
    }
}

void ShowUpdateClientScreen(string fileName, vector<sClient>& vClients)
{
    PrintBordar("Update");

    string AccountNumberToUpdate;
    cout << "\nPlease enter Account Number to update: ";
    getline(cin >> ws, AccountNumberToUpdate);

    sClient* pClient = FindClientByAccountNumber(vClients, AccountNumberToUpdate);

    if (pClient != nullptr) {
        PrintClientCard(*pClient);

        char confirm;
        cout << "\n\nAre you sure you want to update this client? (y/n): ";
        cin >> confirm;

        if (tolower(confirm) == 'y') {
            ChangeClientRecord(*pClient, true);

            WriteClientsToFile(fileName, vClients, RewriteAll);

            cout << "\nClient updated successfully.\n";
        }
        else {
            cout << "\nThe update was cancelled.\n";
        }
    }
    else {
        cout << "\nClient with Account Number [" << AccountNumberToUpdate << "] was not found.\n";
    }
}

void ShowFindClientScreen(vector<sClient>& vClients)
{
    PrintBordar("Find");

    string AccountNumberToFind;
    cout << "\nPlease enter Account Number of the client you want to find: ";
    getline(cin >> ws, AccountNumberToFind);

    sClient* pClient = FindClientByAccountNumber(vClients, AccountNumberToFind);

    if (pClient != nullptr)
    {
        PrintClientCard(*pClient);
    }
    else
    {
        cout << "\nClient with Account Number [" << AccountNumberToFind << "] was not found.\n";
    }
}

short ReadMainMenueOption()
{
    short Choice = 0;
    do
    {
        cout << "Choose what do you want to do? [1 to 6]? ";
        cin >> Choice;

    } while (Choice < 1 || Choice > 6);

    return Choice;
}

void ShowEndScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tProgram Ends :-)";
    cout << "\n-----------------------------------\n";
}

void PerfromMainMenueOption(enAction MainMenueOption)
{
    const string fileName = "Clients.txt";
    vector <sClient> vClients = StoregeClientsData(fileName);

    switch (MainMenueOption)
    {
    case enAction::ShowList:
        system("cls");
        ShowAllClientsScreen(fileName);
        break;

    case enAction::AddNewClient:
        system("cls");
        ShowAddNewClientsScreen(fileName, vClients);
        ShowAllClientsScreen(fileName);
        break;

    case enAction::DeleteClient:
        system("cls");
        ShowDeleteClientScreen(fileName, vClients);
        ShowAllClientsScreen(fileName);
        break;

    case enAction::UpdateClient:
        system("cls");
        ShowUpdateClientScreen(fileName, vClients);
        ShowAllClientsScreen(fileName);
        break;

    case enAction::FindClient:
        system("cls");
        ShowFindClientScreen(vClients);
        break;

    case enAction::Exit:
        system("cls");
        ShowEndScreen();
        break;
    }
}

void ShowMainMenue()
{
    enAction UserChoice;

    do {
        system("cls");
        cout << "===========================================\n";
        cout << "\t\tMain Menu Screen\n";
        cout << "===========================================\n";
        cout << "\t[1] Show Client List.\n";
        cout << "\t[2] Add New Client.\n";
        cout << "\t[3] Delete Client.\n";
        cout << "\t[4] Update Client Info.\n";
        cout << "\t[5] Find Client.\n";
        cout << "\t[6] Exit.\n";
        cout << "===========================================\n";

        UserChoice = (enAction)ReadMainMenueOption();
        PerfromMainMenueOption(UserChoice);

        if (UserChoice != enAction::Exit) {
            cout << "\n\nPress any key to return to the Main Menu...";
            system("pause>0");
        }

    } while (UserChoice != enAction::Exit);

    ShowEndScreen();
}


int main()
{
    ShowMainMenue();
    system("pause>0");

	return 0;
}