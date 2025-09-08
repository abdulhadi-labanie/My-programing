#include <iostream>
#include <string>
#include <vector>
using namespace std;

string GetAStringOfUsre()
{
	string UserSTR;

	cout << "Please Enter your string: ";
	getline(cin, UserSTR);

	return UserSTR;
}

void GetFirstLetterOfEachWord(vector <char>& FirstLetter, string UserSTR)
{
	bool Is_Space = true;

	for (char& letter : UserSTR)
	{
		if (letter == ' ')
			Is_Space = true;

		else if (Is_Space)
		{
			FirstLetter.push_back(letter);
			Is_Space = false;
		}
	}
}

void PrintFirstLetterOfEachWord(vector <char> FirstLetter)
{
	for (char& letter : FirstLetter)
	{
		cout << letter << " ";
	}
}

int main()
{
	vector <char> FirstLetter;
	string UserSTR;

	UserSTR = GetAStringOfUsre();

	GetFirstLetterOfEachWord(FirstLetter, UserSTR);
	PrintFirstLetterOfEachWord(FirstLetter);

	return 0;
}