#include <iostream>
using namespace std;

struct stEmplyee
{
	string name;
	float salary;
};

int main()
{
	stEmplyee emplyee1, *ptr;

	emplyee1.name = "Abdulhadi";
	emplyee1.salary = 53443;

	cout << emplyee1.name << endl;
	cout << emplyee1.salary << endl;

	cout << endl;
	ptr = &emplyee1;

	cout << ptr->name << endl;
	cout << ptr->salary << endl;

	return 0;
}