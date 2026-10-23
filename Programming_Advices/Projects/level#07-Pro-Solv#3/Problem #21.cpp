#include <iostream>
#include <vector>
using namespace std;

void FileFibonacciVector(vector <int>& vFibonacci, short vSaze)
{
	int num1 = 1;
	int num2 = 1;
	int temp = 0;

	vFibonacci.push_back(num1);
	vFibonacci.push_back(num2);

	for (int i = 0; i < vSaze - 2 ; i++)
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;

		vFibonacci.push_back(temp);
	}
}

void PrintFibonacciVector(vector <int> vFibonacci)
{
	for (int& num : vFibonacci)
	{
		if (num == vFibonacci.back())
			cout << num;
		else
			cout << num << ", ";
	}
}

int main()
{
	vector <int> vFibonacci;

	FileFibonacciVector(vFibonacci, 10);

	cout << "The Fibovacci of 10 : \n";
	PrintFibonacciVector(vFibonacci);
	cout << endl;

	return 0;
}