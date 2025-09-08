#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << "Hei\n";
		MyFile << "Hei\n";
		MyFile << "Hei\n";
	}

	return 0;
}