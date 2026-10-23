#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
const string ClientsFileName = "Clients.txt";
const string UserFileName = "Users.txt";


void ShowMainMenue();
void ShowManageUserMenue();
void ShowTransactionsMenue();
void Login();

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

struct stUser
{
    string UserName;
    string Password;
    short Permission;
    bool MarkForDelete = false;
};

stUser ActiveUser;

enum enTransactionsMenueOptions { eDeposit = 1, eWithdraw = 2, eShowTotalBalance = 3, eShowMainMenue = 4 };
enum enManageUsersMenue { eListUser = 1, eAddNewUser = 2, eDeleteUser = 3, emUpdateUser = 4, emFindUser = 5, eMainMenue = 6 };

enum enMainMenueOptions { eListClients = 1, eAddNewClient = 2, eDeleteClient = 3, eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6, eManageUsers = 7, eLogout = 8 };

enum enMainMenuePermissions{ eAll = -1, pListClients = 1, pAddNewClient = 2, pDeleteClient = 4, pUpdateClients = 8, pFindClient = 16, pTranactions = 32, pManageUsers = 64 };


bool ReadBoolen(string text)
{
    char answer;

    while (true)
    {
        cout << text;
        cin >> answer;

        answer = tolower(answer);

        if (answer == 'y' || answer == '1')
            return true;

        if (answer == 'n' || answer == '0')
            return false;

        cout << "\nInvalid choice! Enter (y/n) or (1/0).\n";
    }
}

bool IsUserAdmin(enMainMenuePermissions Permission, stUser User = ActiveUser)
{
    return (User.Permission == enMainMenuePermissions::eAll);
}

vector<string> SplitString(string S1, string Delim)
{

    vector<string> vString;

    short pos = 0;
    string sWord; // define a string variable  

    // use find() function to get the position of the delimiters  
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word   
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }

    return vString;

}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{

    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);//cast string to double

    return Client;
}

stUser ConvertUserLinetoRecord(string Line, string Seperator = "#//#")
{
    stUser User;
    vector<string> vUserData = SplitString(Line, Seperator);

    if (vUserData.size() != 3)
        return User;

    User.UserName = vUserData[0];
    User.Password = vUserData[1];

    try
    {
        User.Permission = stoi(vUserData[2]);
    }
    catch (...)
    {
        User.Permission = 0;
    }

    return User;
}


string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{

    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;

}

string ConvertRecordToLine(stUser User, string Seperator = "#//#")
{
    return  User.UserName + Seperator +
        User.Password + Seperator +
        to_string(User.Permission);
}



bool ClientExistsByAccountNumber(string AccountNumber, string FileName)
{

    vector <sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {

            Client = ConvertLinetoRecord(Line);
            if (Client.AccountNumber == AccountNumber)
            {
                MyFile.close();
                return true;
            }


            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return false;
}

bool UserExistsByUserName(string UserName, string FileName)
{

    vector <stUser> vUser;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        stUser User;

        while (getline(MyFile, Line))
        {

            User = ConvertUserLinetoRecord(Line);
            if (User.UserName == UserName)
            {
                MyFile.close();
                return true;
            }


            vUser.push_back(User);
        }

        MyFile.close();

    }

    return false;
}

void ReadPermission(bool arrPermission[7])
{
    cout << "\nDo You want to give access to:\n";
    arrPermission[0] = ReadBoolen("\n1. Show Client List [y/n] or [1/0] :");
    arrPermission[1] = ReadBoolen("\n2. Add New Client   [y/n] or [1/0] :");
    arrPermission[2] = ReadBoolen("\n3. Delete Client    [y/n] or [1/0] :");
    arrPermission[3] = ReadBoolen("\n4. Update Client    [y/n] or [1/0] :");
    arrPermission[4] = ReadBoolen("\n5. Find Client      [y/n] or [1/0] :");
    arrPermission[5] = ReadBoolen("\n6. Transactions     [y/n] or [1/0] :");
    arrPermission[6] = ReadBoolen("\n7. Manage Users     [y/n] or [1/0] :");

}


short PackAnswersToBits(const bool answers[], short count)
{
    short result = 0;

    for (short i = 0; i < count; i++)
        if (answers[i])
            result |= (1 << i);

    return result;
}

void UserAccessDenied()
{
    system("cls");
    cout << "\n---------------------------------------\n";
    cout << "  Access Denied,\n";
    cout << "  You dont Have permission to do this,\n";
    cout << "  Please Conact Your Admin.\n";
    cout << "\n---------------------------------------\n";
}

sClient ReadNewClient()
{
    sClient Client;

    cout << "Enter Account Number? ";

    // Usage of std::ws will extract allthe whitespace character
    getline(cin >> ws, Client.AccountNumber);

    while (ClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName))
    {
        cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
        getline(cin >> ws, Client.AccountNumber);
    }


    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;

}

stUser ReadNewUser()
{
    stUser User;
    bool IsFull_Accsess;
    bool arrPermission[7];

    cout << "Enter UserNme: ";

    // Usage of std::ws will extract allthe whitespace character
    getline(cin >> ws, User.UserName);

    while (UserExistsByUserName(User.UserName, UserFileName))
    {
        cout << "\nUser with [" << User.UserName << "] already exists, Enter another UserName: ";
        getline(cin >> ws, User.UserName);
    }

    cout << "Enter Password: ";
    getline(cin, User.Password);

    IsFull_Accsess = ReadBoolen("\nDo you want to give full access [1/0] or [y/n]: ");

    while (IsFull_Accsess && !IsUserAdmin(enMainMenuePermissions::eAll))
    {
        cout << "You do not have permission to create an Admin user!\n";

        IsFull_Accsess = ReadBoolen("\nDo you want to give full access [1/0] or [y/n]: ");
    }

    if (IsFull_Accsess)
    {
        User.Permission = -1;
        return User;
    }
    else
    {
        ReadPermission(arrPermission);
        User.Permission = PackAnswersToBits(arrPermission, 7);
    }

    return User;

}


vector <sClient> LoadCleintsDataFromFile(string FileName)
{

    vector <sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

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

vector <stUser> LoadUserDataFromFile(string FileName)
{

    vector <stUser> vUsers;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        stUser User;

        while (getline(MyFile, Line))
        {

            User = ConvertUserLinetoRecord(Line);

            vUsers.push_back(User);
        }

        MyFile.close();

    }
    else
    {
        cout << "\nError please check file name or is exited!!\n";
    }

    return vUsers;

}

void PrintClientRecordLine(sClient Client)
{

    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;

}

void PrintUserRecordLine(stUser User)
{

    cout << "| " << setw(15) << left << User.UserName;
    cout << "| " << setw(10) << left << User.Password;
    cout << "| " << setw(40) << left << User.Permission;

}


void PrintClientRecordBalanceLine(sClient Client)
{

    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.AccountBalance;

}

void ShowAllClientsScreen()
{


    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

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

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient Client : vClients)
        {

            PrintClientRecordLine(Client);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

}

void ShowAllUserScreen()
{

    vector <stUser> vUsers = LoadUserDataFromFile(UserFileName);

    cout << "\n\t\t\t\t\tClient List (" << vUsers.size() << ") User(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "UserName";
    cout << "| " << left << setw(10) << "Password";
    cout << "| " << left << setw(40) << "Permission";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    if (vUsers.size() == 0)
        cout << "\t\t\t\tNo Users Available In the System!";
    else

        for (stUser User : vUsers)
        {

            PrintUserRecordLine(User);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

}


void ShowTotalBalances()
{

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    double TotalBalances = 0;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient Client : vClients)
        {

            PrintClientRecordBalanceLine(Client);
            TotalBalances += Client.AccountBalance;

            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "\t\t\t\t\t   Total Balances = " << TotalBalances;

}

void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "-----------------------------------";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";

}

void PrintUserCard(stUser User)
{
    cout << "\nThe following are the User details:\n";
    cout << "-----------------------------------";
    cout << "\nUsername  : " << User.UserName;
    cout << "\nPassword  : " << User.Password;
    cout << "\nPermission: " << User.Permission;
    cout << "\n-----------------------------------\n";

}


bool FindClientByAccountNumber(string AccountNumber, vector <sClient> vClients, sClient& Client)
{

    for (sClient C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }

    }
    return false;
}

bool FindUserByUserNameAndPass(string UserName, string Password, const vector<stUser>& vUsers, stUser& FoundUser)
{
    for (const stUser& user : vUsers)
    {
        if (user.UserName == UserName && user.Password == Password)
        {
            FoundUser = user;
            return true;
        }
    }
    return false;
}


bool FindUserByUserName(string UserName, vector <stUser> vUsers, stUser& User)
{

    for (stUser user : vUsers)
    {

        if (user.UserName == UserName)
        {
            User = user;
            return true;
        }
    }

    return false;
}


sClient ChangeClientRecord(string AccountNumber)
{
    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;

}

stUser ChangeUserRecord(string UserName)
{
    stUser User;
    bool arrPermission[7];
    User.UserName = UserName;

    cout << "Enter Password: ";
    getline(cin, User.Password);

    if (ReadBoolen("\nDo you want to give full access [1/0] or [y/n]: "))
        User.Permission = -1;
    else
    {
        ReadPermission(arrPermission);
        User.Permission = PackAnswersToBits(arrPermission, 7);
    }

    return User;
}


bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{

    for (sClient& C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }

    }

    return false;

}

bool MarkUserForDeleteByAccountNumber(string UserName, vector <stUser>& vUsers)
{

    for (stUser& User : vUsers)
    {

        if (User.UserName == UserName)
        {
            User.MarkForDelete = true;
            return true;
        }

    }

    return false;

}


vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients)
{

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite

    string DataLine;

    if (MyFile.is_open())
    {

        for (sClient C : vClients)
        {

            if (C.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.  
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;

            }

        }

        MyFile.close();

    }

    return vClients;

}

vector <stUser> SaveUsersDataToFile(string FileName, vector <stUser> vUser)
{

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite

    string DataLine;

    if (MyFile.is_open())
    {

        for (stUser user : vUser)
        {

            if (user.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.  
                DataLine = ConvertRecordToLine(user);
                MyFile << DataLine << endl;

            }

        }

        MyFile.close();

    }

    return vUser;

}


void AddDataLineToFile(string FileName, string  stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {

        MyFile << stDataLine << endl;

        MyFile.close();
    }

}

void AddNewClient()
{
    sClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddNewUser()
{
    stUser User;
    User = ReadNewUser();
    AddDataLineToFile(UserFileName, ConvertRecordToLine(User));

}


void AddNewClients()
{
    char AddMore = 'Y';
    do
    {
        //system("cls");
        cout << "Adding New Client:\n\n";

        AddNewClient();
        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";


        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');

}

void AddNewUsers()
{
    bool AddMore = false;
    do
    {
        //system("cls");
        cout << "Adding New User:\n\n";

        AddNewUser();

        AddMore = ReadBoolen("\nUser Added Successfully, do you want to add more Users? Y/N? ");

    } while (AddMore);

}


bool DeleteClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveCleintsDataToFile(ClientsFileName, vClients);

            //Refresh Clients 
            vClients = LoadCleintsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }

}

string ReadSTR(string text)
{
    string str = "";

    cout << text;
    getline(cin >> ws, str);

    return str;
}

bool DeleteUserByUserName(string UserName, vector <stUser>& vUsers)
{

    stUser User;
    bool Answer = false;

    if (FindUserByUserName(UserName, vUsers, User))
    {

        PrintUserCard(User);

        Answer = ReadBoolen("\n\nAre you sure you want delete this User? y/n ? ");

        if (Answer)
        {
            MarkUserForDeleteByAccountNumber(UserName, vUsers);
            SaveUsersDataToFile(UserFileName, vUsers);

            //Refresh Clients 
            vUsers = LoadUserDataFromFile(UserFileName);

            cout << "\n\nUser Deleted Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nUser with Account Number (" << UserName << ") is Not Found!";
        return false;
    }

}

bool IsLastAdmin(vector <stUser> vUsers)
{
    short AdminsCounter = 0; 

    for (stUser user : vUsers)
    {
        if (user.Permission == -1)
            AdminsCounter++;
    }

    return (AdminsCounter == 1);
}

bool IsUserPermissionAccess(enMainMenuePermissions Permission)
{
    if (ActiveUser.Permission == enMainMenuePermissions::eAll)
        return true; 
    if ((Permission & ActiveUser.Permission) == Permission)
        return true; 
    else 
        return false;
}


bool UpdateClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);
        cout << "\n\nAre you sure you want update this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {

            for (sClient& C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }

            }

            SaveCleintsDataToFile(ClientsFileName, vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }

}

bool UpdateUserByUserName(string UserName, vector<stUser>& vUsers)
{
    if (!IsUserPermissionAccess(enMainMenuePermissions::pManageUsers))
    {
        UserAccessDenied();
        return false;
    }

    stUser User;

    if (!FindUserByUserName(UserName, vUsers, User))
    {
        cout << "\nUser with UserName (" << UserName << ") is Not Found!";
        return false;
    }

    bool IsLastAdminUser = (User.Permission == -1 && IsLastAdmin(vUsers));

    PrintUserCard(User);

    if (!ReadBoolen("\n\nAre you sure you want to update this User? y/n ? "))
        return false;

    stUser UpdatedUser = User;

    cout << "\nEnter new Password (leave empty to keep current): ";
    string NewPassword;
    getline(cin >> ws, NewPassword);
    if (!NewPassword.empty())
        UpdatedUser.Password = NewPassword;

    cout << "Enter new UserName (leave empty to keep current): ";
    string NewUserName;
    getline(cin >> ws, NewUserName);
    if (!NewUserName.empty())
        UpdatedUser.UserName = NewUserName;

    if (IsLastAdminUser)
    {
        cout << "\nThis is the last Admin. You cannot change permissions!\n";
        UpdatedUser.Permission = -1; 
    }
    else
    {
        if (ReadBoolen("\nDo you want to give full access [y/n] or [1/0]? "))
        {
            UpdatedUser.Permission = -1;
        }
        else
        {
            bool arrPermission[7];
            ReadPermission(arrPermission);
            UpdatedUser.Permission = PackAnswersToBits(arrPermission, 7);
        }
    }

    for (stUser& U : vUsers)
    {
        if (U.UserName == UserName)
        {
            U = UpdatedUser;
            break;
        }
    }

    SaveUsersDataToFile(UserFileName, vUsers);

    cout << "\n\nUser Updated Successfully.";
    return true;
}


bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount, vector <sClient>& vClients)
{


    char Answer = 'n';


    cout << "\n\nAre you sure you want perfrom this transaction? y/n ? ";
    cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {

        for (sClient& C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                C.AccountBalance += Amount;
                SaveCleintsDataToFile(ClientsFileName, vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;

                return true;
            }

        }


        return false;
    }

}


void UnpackAnswers(short packed, bool answers[], short count)
{
    for (short i = 0; i < count; i++)
        answers[i] = (packed >> i) & 1;
}


string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;

}

void ShowDeleteClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tDelete Client Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    DeleteClientByAccountNumber(AccountNumber, vClients);

}


void ShowDeleteUserScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tDelete User Screen";
    cout << "\n-----------------------------------\n";

    vector <stUser> vUsers = LoadUserDataFromFile(UserFileName);
    string UserName = ReadSTR("Please enter UserName: ");
    if (!IsLastAdmin(vUsers))
        DeleteUserByUserName(UserName, vUsers);
 
}


void ShowUpdateClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tUpdate Client Info Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);

}

void ShowUpdateUserScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tUpdate User Info Screen";
    cout << "\n-----------------------------------\n";

    vector <stUser> vUsers = LoadUserDataFromFile(UserFileName);
    string UserName = ReadSTR("Please enter UserName: ");
    UpdateUserByUserName(UserName, vUsers);

}

void ShowAddNewClientsScreen()
{

    cout << "\n-----------------------------------\n";
    cout << "\tAdd New Clients Screen";
    cout << "\n-----------------------------------\n";

    AddNewClients();
}

void ShowAddNewUsersScreen()
{

    cout << "\n-----------------------------------\n";
    cout << "\tAdd New Users Screen";
    cout << "\n-----------------------------------\n";

    AddNewUsers();
}


void ShowFindClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tFind Client Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    sClient Client;
    string AccountNumber = ReadClientAccountNumber();
    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number[" << AccountNumber << "] is not found!";

}

void ShowFindUserScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tFind User Screen";
    cout << "\n-----------------------------------\n";

    vector <stUser> vUsers = LoadUserDataFromFile(UserFileName);
    stUser User;
    string UserName = ReadSTR("Please enter UserName: ");
    if (FindUserByUserName(UserName, vUsers, User))
        PrintUserCard(User);
    else
        cout << "\nUser with Account Number[" << UserName << "] is not found!";

}

void ShowEndScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tProgram Ends :-)";
    cout << "\n-----------------------------------\n";

}

void ShowLoginBorder()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tLogin Screen\n";
    cout << "===========================================\n";

}

void ShowDepositScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tDeposit Screen";
    cout << "\n-----------------------------------\n";


    sClient Client;

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();


    while (!FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }


    PrintClientCard(Client);

    double Amount = 0;
    cout << "\nPlease enter deposit amount? ";
    cin >> Amount;

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount, vClients);

}

void ShowWithDrawScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tWithdraw Screen";
    cout << "\n-----------------------------------\n";

    sClient Client;

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();


    while (!FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }

    PrintClientCard(Client);

    double Amount = 0;
    cout << "\nPlease enter withdraw amount? ";
    cin >> Amount;

    //Validate that the amount does not exceeds the balance
    while (Amount > Client.AccountBalance)
    {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << Client.AccountBalance << endl;
        cout << "Please enter another amount? ";
        cin >> Amount;
    }

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1, vClients);

}

void ShowTotalBalancesScreen()
{

    ShowTotalBalances();

}

void GoBackToMainMenue()
{
    cout << "\n\nPress any key to go back to Main Menue...";
    system("pause>0");
    ShowMainMenue();

}
void GoBackToTransactionsMenue()
{
    cout << "\n\nPress any key to go back to Transactions Menue...";
    system("pause>0");
    ShowTransactionsMenue();

}
void GoBackToManageUsersMenue()
{
    cout << "\n\nPress any key to go back to Manage Users Menue...";
    system("pause>0");
    ShowManageUserMenue();

}

short ReadMenueOption(short max)
{
    cout << "Choose what do you want to do? [1 to " << max << "] ? ";
    short Choice = 0;
    cin >> Choice;

    return Choice;
}

void PerfromTranactionsMenueOption(enTransactionsMenueOptions TransactionMenueOption)
{
    switch (TransactionMenueOption)
    {
    case enTransactionsMenueOptions::eDeposit:
    {
        system("cls");
        ShowDepositScreen();
        GoBackToTransactionsMenue();
        break;
    }

    case enTransactionsMenueOptions::eWithdraw:
    {
        system("cls");
        ShowWithDrawScreen();
        GoBackToTransactionsMenue();
        break;
    }


    case enTransactionsMenueOptions::eShowTotalBalance:
    {
        system("cls");
        ShowTotalBalancesScreen();
        GoBackToTransactionsMenue();
        break;
    }


    case enTransactionsMenueOptions::eShowMainMenue:
    {

        ShowMainMenue();

    }
    }

}

void ShowTransactionsMenue()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tTransactions Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Deposit.\n";
    cout << "\t[2] Withdraw.\n";
    cout << "\t[3] Total Balances.\n";
    cout << "\t[4] Main Menue.\n";
    cout << "===========================================\n";
    PerfromTranactionsMenueOption((enTransactionsMenueOptions)ReadMenueOption(4));
}

void PerfromManageUserMenueOption(enManageUsersMenue ManageUserMenueOption)
{

    switch (ManageUserMenueOption)
    {
    case enManageUsersMenue::eListUser:
    {
        system("cls");
        ShowAllUserScreen();
        GoBackToManageUsersMenue();
        break;
    }

    case enManageUsersMenue::eAddNewUser:
    {
        system("cls");
        ShowAddNewUsersScreen();
        GoBackToManageUsersMenue();
        break;
    }


    case enManageUsersMenue::eDeleteUser:
    {
        system("cls");
        ShowDeleteUserScreen();
        GoBackToManageUsersMenue();
        break;
    }


    case enManageUsersMenue::emUpdateUser:
    {
        system("cls");
        ShowUpdateUserScreen();
        GoBackToManageUsersMenue();
        break;
    }


    case enManageUsersMenue::emFindUser:
    {
        system("cls");
        ShowFindUserScreen();
        GoBackToManageUsersMenue();
        break;
    }


    case enManageUsersMenue::eMainMenue:
    {

        ShowMainMenue();

    }
    }

}

void ShowManageUserMenue()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tManage User Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] List Users\n";
    cout << "\t[2] Add new user.\n";
    cout << "\t[3] Delete user.\n";
    cout << "\t[4] Update user.\n";
    cout << "\t[5] Find user.\n";
    cout << "\t[6] Main Menue.\n";
    cout << "===========================================\n";
    PerfromManageUserMenueOption((enManageUsersMenue)ReadMenueOption(6));
}

void PerfromMainMenueOption(enMainMenueOptions MainMenueOption)
{
    switch (MainMenueOption)
    {
    case enMainMenueOptions::eListClients:
    {
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pListClients))
        {
            ShowAllClientsScreen();
            GoBackToMainMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    }
    case enMainMenueOptions::eAddNewClient:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pAddNewClient))
        {
            ShowAddNewClientsScreen();
            GoBackToMainMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    case enMainMenueOptions::eDeleteClient:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pDeleteClient))
        {
            ShowDeleteClientScreen();
            GoBackToMainMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }


    case enMainMenueOptions::eUpdateClient:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pUpdateClients))
        {
            ShowUpdateClientScreen();
            GoBackToMainMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    case enMainMenueOptions::eFindClient:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pFindClient))
        {
            ShowFindClientScreen();
            GoBackToMainMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    case enMainMenueOptions::eShowTransactionsMenue:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pTranactions))
        {
            ShowTransactionsMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    case enMainMenueOptions::eManageUsers:
        system("cls");
        if (IsUserPermissionAccess(enMainMenuePermissions::pManageUsers))
        {
            ShowManageUserMenue();
            break;
        }
        else
        {
            UserAccessDenied();
            GoBackToMainMenue();
        }

    case enMainMenueOptions::eLogout:
        system("cls");

        Login();
        break;
    }

} 

void ShowMainMenue()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tMain Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Show Client List.\n";
    cout << "\t[2] Add New Client.\n";
    cout << "\t[3] Delete Client.\n";
    cout << "\t[4] Update Client Info.\n";
    cout << "\t[5] Find Client.\n";
    cout << "\t[6] Transactions.\n";
    cout << "\t[7] Manage Users.\n";
    cout << "\t[8] Logout.\n";
    cout << "===========================================\n";
    PerfromMainMenueOption((enMainMenueOptions)ReadMenueOption(8)); 
}

bool IfFindeSpaceInUserLogin(stUser User)
{
    return (User.UserName.find(' ') != string::npos ||
        User.Password.find(' ') != string::npos);
}


stUser InputUserLogin()
{

    cout << "  Enter UserName: ";
    getline(cin >> ws, ActiveUser.UserName);

    cout << "  Enter Password: ";
    getline(cin >> ws, ActiveUser.Password);

    return ActiveUser;
}

stUser CheckLoginUserInput(stUser User)
{
    bool Checked = true;
    vector <stUser> vUsers = LoadUserDataFromFile(UserFileName);

    while (true)
    {
        if (!Checked)
        {
            ShowLoginBorder();
            cout << "\n  Error Invalid Username/Password!!\n";
            ActiveUser = InputUserLogin();
        }

        if (IfFindeSpaceInUserLogin(ActiveUser))
        {
            Checked = false;
            continue;
        }

        stUser FoundUser;

        if (FindUserByUserNameAndPass(ActiveUser.UserName, ActiveUser.Password, vUsers, FoundUser))
        {
            ActiveUser = FoundUser;
            Checked = true;
            break;
        }
        else
        {
            Checked = false;
        }

    }

    return ActiveUser;
}

void Login()
{
    ShowLoginBorder();

    ActiveUser = InputUserLogin();
    ActiveUser = CheckLoginUserInput(ActiveUser);

    ShowMainMenue();

}

void StartAppBank()
{
    Login();
}

int main()

{
    StartAppBank();

    system("pause>0");

    return 0;
}
