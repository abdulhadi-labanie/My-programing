#include <iostream>
using namespace std;

string ReadPasswordOf3Letters(string &pass)
{
	cout << "Enter a password of 3 Letter like ( AAC ): ";
	cin >> pass;

	return pass;
}

bool CalculatePassOfLetterFromAAAtoZZZ(string pass)
{
	string word = "";
	int counter = 1;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int l = 65; l <= 90; l++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(l);

				cout << "Trial[" << counter << "] : " << word << endl;

				if (word == pass)
				{
					cout << "\nPassword is = " << pass << endl;
					cout << "Found after " << counter << " Trial(s).\n";
					return true;
				}

				word = "";
				counter++;
			}
		}
	}

}


int main()
{
	string pass;

	pass = ReadPasswordOf3Letters(pass);

	CalculatePassOfLetterFromAAAtoZZZ(pass);

	return 0;
}