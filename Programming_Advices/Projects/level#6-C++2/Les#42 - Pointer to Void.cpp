#include <iostream>
using namespace std;

struct stEmployee
{
	string name;
	int salary;
};

int main()
{
	stEmployee Employee1, * ptr;

	Employee1.name = "Abdu";
	Employee1.salary = 5000;

	ptr = &Employee1;

	cout << "Name: " << (static_cast<stEmployee*>(ptr))->name << endl;
	cout << "Salary: " << (static_cast<stEmployee*>(ptr))->salary << endl;

	return 0;
}