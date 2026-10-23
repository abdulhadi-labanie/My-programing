#include <iostream>
#include <vector>
using namespace std;

struct stEmployees
{
	string FirstName;
	string LastName;
	int Salary;
};

void ReadEmployee(vector <stEmployees>& employees)
{
	stEmployees TempEmployee;
	char answer = 'Y';

	while (answer == 'Y' || answer == 'y')
	{
		cout << "Enter a employee first name: ";
		cin >> TempEmployee.FirstName;

		cout << "Enter a employee last name : ";
		cin >> TempEmployee.LastName;

		cout << "Enter a employee salary    : ";
		cin >> TempEmployee.Salary;

		employees.push_back(TempEmployee);

		cout << "\nDo you want to Add more [y/n]: ";
		cin >> answer;

		cout << endl;
	}
}

void PrintResult(vector <stEmployees>& employees)
{
	stEmployees TempEmployee;
	cout << "\nEmployees Vector: \n\n";

	for (stEmployees & employee : employees)
	{
		cout << "First Name: " << employee.FirstName << endl;
		cout << "Last Name : " << employee.LastName << endl;
		cout << "Salary    : " << employee.Salary << endl;

		cout << endl;
	}
}

int main()
{
	vector <stEmployees> vEmployees;

	ReadEmployee(vEmployees);
	PrintResult(vEmployees);

	return 0;
}