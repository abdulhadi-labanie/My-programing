#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

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

int main()
{
	vector <string> vNames = { "Abdud", "Hammud", "duud", "Siii" };

	WriteVectorContentToFile("D:\MyFile.txt", vNames);

	return 0;
}
