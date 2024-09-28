#include <iostream>
using namespace std;

int main()
{
    short pitus, leveys, pinta_ala;

    cout << "Enter the pitus:\n";
    cin >> pitus;

    cout << "Enter the leveys:\n";
    cin >> leveys;

    pinta_ala = pitus * leveys;

    cout << "Pinta-ala on " << pinta_ala;

    return 0;
}