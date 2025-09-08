#include <iostream>
using namespace std;

void swap(int* n1, int* n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}


int main()
{
	int a = 10;
	int b = 20;

	cout << "The value before swap a = " << a << ", b = " << b << endl;

	swap(&a, &b);

	cout << "The value after swap a = " << a << ", b = " << b << endl;

	return 0;
}