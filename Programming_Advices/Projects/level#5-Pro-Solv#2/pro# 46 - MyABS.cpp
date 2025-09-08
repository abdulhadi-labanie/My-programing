#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	int num = 0;

	cout << "Enter a number: ";
	cin >> num;

	return num;
}

float MyASB(float num)
{
	if (num < 0)
		num = num * -1;

	return num;
}

int main()
{
	float Num = ReadNumber();

	cout << endl;

	cout << "My abs Result: " << MyASB(Num) << endl;
	cout << "C++ abs Resul: " << abs(Num) << endl;

	return 0;
}