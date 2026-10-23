#include <iostream>
using namespace std;

class clsA
{
public:
    int x;

    void Print()
    {
        cout << "The value of x = " << x << endl;
    }
};

// Object sent by value, any update will NOT be reflected on the original object
void Fun1(clsA A1)
{
    A1.x = 100;
}

// Object sent by reference, any update WILL be reflected on the original object
void Fun2(clsA& A1)
{
    A1.x = 200;
}

int main()
{
    clsA A1;
    A1.x = 50;

    cout << "\nA.x before calling Fun1: " << endl;
    A1.Print();

    // Pass by value, object will NOT be affected
    Fun1(A1);
    cout << "\nA.x after calling Fun1 (by value): " << endl;
    A1.Print();

    // Pass by reference, object WILL be affected
    Fun2(A1);
    cout << "\nA.x after calling Fun2 (by reference): " << endl;
    A1.Print();

    system("pause>0");
    return 0;
}
