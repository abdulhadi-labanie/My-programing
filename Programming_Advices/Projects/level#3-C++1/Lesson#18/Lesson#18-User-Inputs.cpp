#include <iostream>
using namespace std;

int main()
{
    // code 1:

	string name;
	int age;
	string city;
	string country;
	int monthly_salary;
	char gender;
	bool marrid;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter city: ";
	cin >> city;
	cout << "Enter country: ";
	cin >> country;
	cout << "Enter monthly_salary: ";
	cin >> monthly_salary;
	cout << "Enter gender: ";
	cin >> gender;
	cout << "Enter marrid: ";
	cin >> marrid;

	cout << "*******************************************\n";
	cout << "Name: " << name << endl;
	cout << "Age : " << age << "years.\n";
	cout << "City : " << city << "\n";
	cout << "Country : " << country << "\n";
	cout << "Monthly salary : " << monthly_salary << "\n";
	int yearly_salary = monthly_salary * 12;
	cout << "Yearly salary : " << yearly_salary << "€\n";
	cout << "Gender : " << gender << "\n";
	cout << "Married : " << marrid << "\n";
	cout << "*******************************************" << "\n" << "\n";

	/*
	// code 2 :

	int num1, num2, num3, total;

	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num1: ";
	cin >> num2;
	cout << "Enter num1: ";
	cin >> num3;

	total = num1 + num2 + num3;

	cout << num1 << "+\n";
	cout << num2 << "+\n";
	cout << num3 << "+\n";
	cout << "-----------------------\n";
	cout << "Total = " << total << "\n";

	
	// code 3 :

	int Age , num = 5, total_age;

	cout << "Enter age: ";
	cin >> Age;

	total_age = Age + num;

	cout << "After " << num << " years you will be " << total_age << " years old.\n";

	*/

	return 0;

}
