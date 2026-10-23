#include <iostream>
using namespace std;

class clsCalculator {
private:
    double result = 0;
    string typeCalculator = "";
    int numberToCalculat = 0;

    string SetTypeCalculator(string type)
    {
        return typeCalculator = type;
    }

    void ReturnResultIfDivideNumZero(double &divideNum)
    {
        if (divideNum == 0)
            divideNum = result;
    }

    double GetFinalReults(int MultiplyNum)
    {
        return result;
    }

public:

    short Clear()
    {
        SetTypeCalculator("Clearing");
        result = 0;

        return numberToCalculat = 0;
    }

    int Add(double AddNum)
    {
        SetTypeCalculator("Adding");
        result += AddNum;

        return numberToCalculat = AddNum;
    }

    int Subtract(double SubtractNum)
    {
        SetTypeCalculator("Subtracting");
        result -= SubtractNum;

        return numberToCalculat = SubtractNum;
    }

    int Divide(double DivideNum)
    {
        SetTypeCalculator("Dividing");
        ReturnResultIfDivideNumZero(DivideNum);
        result /= DivideNum;

        return numberToCalculat = DivideNum;
    }

    int Multiply(double MultiplyNum)
    {
        SetTypeCalculator("Multipling");
        result *= MultiplyNum;

        return numberToCalculat = MultiplyNum;
    }

    void PrintResult()
    {
        cout << "Result Agter " << typeCalculator << " " << numberToCalculat << " is = " << result << endl;
    }
};

int main() {

    clsCalculator Calculator1;

    Calculator1.Clear();
    Calculator1.PrintResult();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Multiply(10);
    Calculator1.PrintResult();

    Calculator1.Multiply(10);
    Calculator1.PrintResult();

    Calculator1.Subtract(10);
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();

    return 0;
}
