#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContenet)
{
	fstream file;

	file.open(FileName, ios::in);

	if (file.is_open())
	{
		string line;

		while (getline(file, line))
		{
			vFileContenet.push_back(line);
		}

		file.close();
	}

}

int main()
{
	vector <string> vFileContenet;

	LoadDataFromFileToVector("D:\MyFile.txt", vFileContenet);

	for (string& Line : vFileContenet)
	{
		cout << Line << endl;
	}

	return 0;
}