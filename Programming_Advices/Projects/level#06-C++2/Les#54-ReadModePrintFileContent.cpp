#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void ReadFile(string FileName)
{
	fstream File;

	File.open(FileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			cout << Line << endl;
		}

		File.close();
	}
}

int main()
{

	ReadFile("D:\MyFile.txt");

	return 0;
}