#include <iostream>
using namespace std;

class clsEmployee {

private:
    float BasicSalary;
    float TaxRate = 0.1;  // 10%

    float CalculateTax() {
        return BasicSalary * TaxRate;
    }

public:

    void SetSalary(float Salary) {
        BasicSalary = Salary;
    }

    float GetNetSalary() {
        return BasicSalary - CalculateTax();
    }
};

int main() {

    clsEmployee Employee1;

    Employee1.SetSalary(2000);

    cout << "Net Salary = " << Employee1.GetNetSalary() << endl;

    return 0;
}
