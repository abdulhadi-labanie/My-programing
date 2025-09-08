#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int ReadUserInputNumber()
{
    int UserInput;

    do
    {
        cout << "\n------------------------------------------------\n\n";
        cout << "1. Read File data." << endl;
        cout << "2. Add new data." << endl;
        cout << "3. Updata data in file." << endl;
        cout << "4. Delete data in file." << endl;
        cout << "5. Exit!" << endl;
        cout << "\nChouse 1 - 5: ";

        cin >> UserInput;

    } while (UserInput <= 0 || UserInput > 5);

    return UserInput;
}

void LoadDataFromFileToVector(string Filename, vector <string>& vNames)
{
    fstream file;
    file.open(Filename, ios::in);

    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            vNames.push_back(line);
        }
        file.close();
    }
}

void SaveNewVectorDataToFile(string Filename, vector <string> vNames)
{
    fstream file;
    file.open(Filename, ios::out);

    if (file.is_open())
    {
        for (string& name : vNames)
        {
            if (name != "")
            {
                file << name << endl;
            }
        }
    }
    file.close();
}

void AddNewDataInFile(string Filename)
{
    fstream file;
    file.open(Filename, ios::out | ios::app);

    if (file.is_open())
    {
        string UserInput;

        cout << "\nEnter a Name : ";
        cin >> UserInput;

        file << UserInput << endl;
    }

    file.close();
}

bool DeleteOrUpdataVectorData(string Filename, vector <string>& vNames, bool isUpdate)
{
    vNames.clear();
    LoadDataFromFileToVector(Filename, vNames);

    bool IsUpdata = false;
    string record, updata;

    if (isUpdate == 1)
    {
        cout << "Enter a record data : ";
        cin >> record;

        cout << "Enter a new data : ";
        cin >> updata;

        for (string& line : vNames)
        {
            if (record == line)
            {
                line = updata;
                IsUpdata = true;
            }
        }
    }
    else
    {
        cout << "Enter a record data : ";
        cin >> record;

        for (string& line : vNames)
        {
            if (record == line)
            {
                line = "";
                IsUpdata = true;
            }
        }
    }


    SaveNewVectorDataToFile(Filename, vNames);

    return IsUpdata;
}

void PrintFileContente(string FileName)
{
    fstream file;
    file.open(FileName, ios::in);

    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "File not found!";
    }
}

void StartFileEdit(string FileName, vector <string> & vNames)
{
    

    while (true)
    {
        int UserInput = ReadUserInputNumber();

        if (UserInput == 1)
        {
            cout << "\nFile data are:\n";
            PrintFileContente(FileName);

            continue;
        }

        else if (UserInput == 2)
        {
            AddNewDataInFile(FileName);
            cout << "Your data was added in the file!\n";

            continue;
        }

        else if (UserInput == 3)
        {
            bool Found;

            do
            {
                Found = DeleteOrUpdataVectorData(FileName, vNames, 1);
                if (Found == false)
                    cout << "Data unfound!!\n";

            } while (Found == false);

            cout << "The data updata was completed!\n";
            PrintFileContente(FileName);

            continue;
        }


        else if (UserInput == 4)
        {
            bool Found;

            do
            {
                Found = DeleteOrUpdataVectorData(FileName, vNames, 0);
                if (Found == false)
                    cout << "Data unfound!!\n";

            } while (Found == false);

            cout << "The data was deleted!\n";
            PrintFileContente(FileName);

            continue;
        }

        else
        {
            PrintFileContente(FileName);
            break;
        }
    }
    

}

int main()
{
    vector <string> vNames;
    string FileName = "MyFile.txt";

    StartFileEdit(FileName, vNames);

    return 0;
}