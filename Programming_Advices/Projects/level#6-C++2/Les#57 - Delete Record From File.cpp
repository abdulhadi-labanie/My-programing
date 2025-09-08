#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void ReadFileFromVector(string FileName, vector <string> & vNames)
{
	fstream file;


	file.open(FileName, ios::in);

	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			vNames.push_back(line);
		}

		file.close();

		cout << "File read was completed!\n";
	}
	else
	{
		cout << "File read was not completed!!!!!!\n";
	}
}

void WriteVectorContentToFile(string FileName, vector <string> vNames)
{
	fstream file;

	file.open(FileName, ios::out);

	if (file.is_open())
	{
		for (string line : vNames)
		{
			if (line != "")
			{
				file << line << endl;
			}
		}
		file.close();

		cout << "Wirte is completed!\n";
	}
	else
	{
		cout << "Wirte do not completed!!!!!!!\n";
	}
}

void DeleteVectorElements(string FileName, string Record)
{
	vector <string> vNames;

	ReadFileFromVector(FileName, vNames);

	for (string& Name : vNames)
	{
		if (Name == Record)
		{
			Name = "";
			cout << Record << "is deleted\n";
		}
	}

	WriteVectorContentToFile(FileName, vNames);
}

void PrintFileContent(string FileName)
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
}

int main()
{

	string FileName = "MyFeli.txt";
	cout << "File before name delete:" << endl;
	PrintFileContent(FileName);

	cout << "\nFile after name delete:" << endl;
	DeleteVectorElements(FileName, "Sara");

	PrintFileContent(FileName);

	return 0;
}