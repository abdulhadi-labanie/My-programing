#include <iostream>
using namespace std;

int x = 100;

void varScopeDef() {
    int x = 200;

    cout << "The var Scope / local x = " << x << endl << endl;
}


int main()
{
    int x = 300;

    cout << "The var global x = " << ::x << "\n\n";

    varScopeDef();

    cout << "The var local in main def x = " << x << "\n\n";


    return 0;
}