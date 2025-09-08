#include <iostream>
using namespace std;

struct address {
	string talo;
	string ovi_num;
	short post_num;
};

struct information {
	string github_user;
	string phone;
	string email;
};

enum Gender { Male, Female };
enum Marrid { singel, marrid };

struct employee {
	string name;
	short age;
	string city;
	string country;
	short monthly_salary;
	address em_address;
	information media;
};


int main()
{
	employee CEO;

	cout << "Enter name: ";
	cin >> CEO.name;
	cout << "Enter age: ";
	cin >> CEO.age;
	cout << "Enter city: ";
	cin >> CEO.city;
	cout << "Enter country: ";
	cin >> CEO.country;
	cout << "Enter monthly_salary: ";
	cin >> CEO.monthly_salary;



	cout << "\n********************************************\n";
	cout << "Name: " << CEO.name << endl;
	cout << "Age : " << CEO.age << "years.\n";
	cout << "City : " << CEO.city << "\n";
	cout << "Country : " << CEO.country << "\n";
	cout << "Monthly salary : " << CEO.monthly_salary << "\n";
	int yearly_salary = CEO.monthly_salary * 12;
	cout << "Yearly salary : " << yearly_salary << "€\n";
	cout << "Gender : " << Gender::Male << "\n";
	cout << "Married : " << Marrid::singel << "\n";
	cout << "*********************************************" << "\n" << "\n";

	return 0;
}