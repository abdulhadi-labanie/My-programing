#include <iostream>
#include <string>
using namespace std;

void PrintTableHeaderFrom1To10()
{
	cout << "\n\t\t\tMultipliaction Table From 1 To 10\n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << " \t" << i;
	}
	cout << "\n-------------------------------------------------------------------------------------\n";
}

string ColumSperator(int i)
{
	if (i >= 10)
		return "  |";
	else
		return "   |";
}

void PrintCalculate1To10InTable()
{
	int Rivi, hylly;

	PrintTableHeaderFrom1To10();

	for (Rivi = 1; Rivi<=10; Rivi++)
	{
		cout << " " << Rivi << ColumSperator(Rivi) << "\t";
		for (hylly = 1; hylly <= 10; hylly++)
		{
			cout << hylly * Rivi << "\t";
		}
		cout << endl;
	}
}

int main()
{

	PrintCalculate1To10InTable();

	return 0;
}