class clsEmployee {
private:
    struct stSalary {
        double Basic;
        double Bonus;
    };

    stSalary Salary;

public:
    void SetSalary(double Basic, double Bonus) {
        Salary.Basic = Basic;
        Salary.Bonus = Bonus;
    }

    double TotalSalary() {
        return Salary.Basic + Salary.Bonus;
    }
};
