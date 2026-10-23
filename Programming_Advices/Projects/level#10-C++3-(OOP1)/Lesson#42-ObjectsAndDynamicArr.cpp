#include <iostream>
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
    clsA* _arr = nullptr;
    int _size;

public:

    int ReadNum()
    {
        int num = 0; 

        cout << "\nEnter a couter numbers: ";
        cin >> num;

        return num;
    }

    void FillXValues()
    {
        _size = ReadNum();

        if (_arr != nullptr)
            delete[] _arr;

        _arr = new clsA[_size];

        for (int i = 0; i< _size; i++)
        {
            int x;

            cout << i +1 << ".Enter a X value: ";
            cin >> x;

            _arr[i] = clsA(x);
        }
    }

    void PrintValues() const
    {

        cout << "\nValues in arr:\n";

        for (int i = 0; i < _size; i++)
        {
            _arr[i].Print();
        }
    }

    ~clsManager()
    {
        delete[] _arr;
        _arr = nullptr;
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
