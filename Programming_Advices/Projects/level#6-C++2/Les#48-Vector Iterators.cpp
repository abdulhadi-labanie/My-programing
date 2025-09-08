#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector <int> vNums = { 10,20,30 };

    vector<int>::iterator iter;

    for (iter = vNums.begin(); iter != vNums.end(); iter++)
    {
        cout << *iter << endl;
    }

    cout << "\n---------------------------------\n\n";

    vector<int>::reverse_iterator RevIter;

    for (RevIter = vNums.rbegin(); RevIter != vNums.rend(); RevIter++)
    {
        cout << *RevIter << endl;
    }

    return 0;
}
