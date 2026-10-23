#include <iostream>
using namespace std;

void PrintNumber(int M, int N)
{
	if (M >= 1)
	{
		cout << M << endl;
		PrintNumber(M - 1, N);
	}
}

int powerNumber(int N, int power)
{

	if (power == 0)
	{
		return 1;
	}
	else
	{
		return (N * powerNumber(N, power - 1));
	}
}

int main()
{

	PrintNumber(10, 1);

	cout << endl;

	powerNumber(2, 4);

	return 0;
}