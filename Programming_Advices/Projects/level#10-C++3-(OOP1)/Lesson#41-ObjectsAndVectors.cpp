#include <iostream>
#include <vector>
using namespace std;



class clsA
{
    int _x;

public:

    clsA(int x = 0)
    {
        this->_x = x;
    }

    void setX(int x)
    {
        _x = x;
    }

    int x()
    {
        return _x;
    }

    void Print() const
    {
        cout << "The value of x = " << _x << endl;

    }
};

class clsManager
{
private:
    vector <clsA> vOpj;

public:
    static short count;

    int ReadNum()
    {
        int num = 0; 

        cout << "\nEnter a couter numbers: ";
        cin >> num;

        return num;
    }

    void FillXValues()
    {
        short couter = ReadNum();

        for (int i = 0; i< couter; i++)
        {
            int x;

            cout << i +1 << ".Enter a X value: ";
            cin >> x;

            vOpj.push_back(clsA(x));
        }
    }

    void PrintValues() const
    {
        cout << "\nValues in vector:\n";

        for (const clsA& item : vOpj)
        {
            item.Print();
        }
    }

};


int main()
{
    clsManager xVector;

    xVector.FillXValues();
    xVector.PrintValues();

    system("pause>0");
    return 0;
}
