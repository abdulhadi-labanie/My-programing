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

struct employee {
	string name;
	short age;
	string city;
	string country;
	short monthly_salary;
	char gender;
	bool marrid;
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
	cout << "Enter gender: ";
	cin >> CEO.gender;
	cout << "Enter marrid: ";
	cin >> CEO.marrid;

	cout << "\nEnter address talo: ";
	cin >> CEO.em_address.talo;
	cout << "Enter ovin numero: ";
	cin >> CEO.em_address.ovi_num;
	cout << "Enter post numero: ";
	cin >> CEO.em_address.post_num;

	cout << "\nEnter GitHub User name: ";
	cin >> CEO.media.github_user;
	cout << "Enter phone numero: ";
	cin >> CEO.media.phone;
	cout << "Enter Email: ";
	cin >> CEO.media.email;

	cout << "\n********************************************\n";
	cout << "Name: " << CEO.name << endl;
	cout << "Age : " << CEO.age << "years.\n";
	cout << "City : " << CEO.city << "\n";
	cout << "Country : " << CEO.country << "\n";
	cout << "Monthly salary : " << CEO.monthly_salary << "\n";
	int yearly_salary = CEO.monthly_salary * 12;
	cout << "Yearly salary : " << yearly_salary << "€\n";
	cout << "Gender : " << CEO.gender << "\n";
	cout << "Married : " << CEO.marrid << "\n";
	cout << "*********************************************" << "\n" << "\n";

	cout << "******************* address ****************\n";
	cout << "talo: " << CEO.em_address.talo << endl;
	cout << "Ovin numero : " << CEO.em_address.ovi_num << "years.\n";
	cout << "Posti numero : " << CEO.em_address.post_num << "\n";
	cout << "*********************************************" << "\n" << "\n";

	cout << "***************** information ***************\n";
	cout << "GitHub user name: " << CEO.media.github_user << endl;
	cout << "Phone numero : " << CEO.media.phone << "years.\n";
	cout << "Email : " << CEO.media.email << "\n";
	cout << "*********************************************" << "\n" << "\n";

    return 0;
}