#include <iostream>
#include <cstdlib>
using namespace std;

short ReadNumber(string Massige)
{
	short num;

	do
	{
		cout << Massige;
		cin >> num;

	} while (num < 0);

	return num;
}

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

string MakeRand4Letter()
{
	string Rand4Letter = "";

	for (int i = 1; i <= 4; i++)
	{
		Rand4Letter += char(RandomNumber(65, 90));
	}

	return Rand4Letter;
}

string MakeFullKey()
{
	string FullKey;

	FullKey = MakeRand4Letter() + "-" + MakeRand4Letter() + "-" + MakeRand4Letter() + "-" + MakeRand4Letter();

	return FullKey;
}

void PrintFullKey(short Num)
{
	cout << endl;

	for (int i = 1; i <= Num; i++)
	{
		cout << "Key[" << i << "] : " << MakeFullKey() << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	
	PrintFullKey(ReadNumber("Please enter a psitive number: "));

	return 0;
} 