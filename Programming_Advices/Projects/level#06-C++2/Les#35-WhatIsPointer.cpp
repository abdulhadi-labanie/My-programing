#include <iostream>
using namespace std;

int main()
{

	int a = 10;

	int* p = &a;

	cout << "The value of a = " << a << endl;
	cout << "The value of p = " << p << endl << endl;

	cout << "The addrese of a = " << &a << endl;
	cout << "The addrese of p = " << &p << endl;

	return 0;
}