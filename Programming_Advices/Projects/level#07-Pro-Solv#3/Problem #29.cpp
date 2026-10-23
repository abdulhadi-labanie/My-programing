#include <iostream>
#include <string>
using namespace std;

enum enWhatToCount {SmallLetter = 0, CapitalLetter = 1, All = 3};

string ReadStr()
{
    string str;

    cout << "Please enter a character:\n";
    getline(cin, str);

    return str;
}

short GetLettersCount(string str, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
        return str.length();

    short counter = 0;

    for (short i = 0; i <= str.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitalLetter && isupper(str[i]))
        {
            counter++;
        }
        else if (WhatToCount == enWhatToCount::SmallLetter && islower(str[i]))
        {
            counter++;
        }
    }

    return counter;
}


int main()
{
    string input = ReadStr();

    cout << "\nString Length = " << GetLettersCount(input) << endl;
    cout << "Capital letters count = " << GetLettersCount(input, enWhatToCount::CapitalLetter) << endl;
    cout << "Small Letters Count = " << GetLettersCount(input, enWhatToCount::SmallLetter) << endl;

    return 0;
}