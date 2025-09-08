#include <iostream>
#include <string>
using namespace std;

enum enLettersType {SmallLetters = 0, CapitelLetters = 1, SmallAndCapitelLetters = 2, All = 3};

string ReadStr()
{
    string str;

    cout << "Please enter a string:\n";
    getline(cin, str);

    return str;
}

char ReadChar()
{
    char Ch;

    cout << "\nPlease enter a character:\n";
    cin >> Ch;

    return Ch;
}

enLettersType CheckType(char ch)
{
    if (isupper(ch))
        return CapitelLetters;
    else if (islower(ch))
        return SmallLetters;
    else
        return All;
}

short LettersSereshCount(string str, char ch, enLettersType WhatToCount = enLettersType::All)
{
    if (WhatToCount == enLettersType::All)
        return str.length();

    short counter = 0;

    for (short i = 0; i < str.length(); i++)
    {
        if (WhatToCount == CapitelLetters && isupper(str[i]) && str[i] == toupper(ch))
            counter++;
        else if (WhatToCount == SmallLetters && islower(str[i]) && str[i] == tolower(ch))
            counter++;
        else if (WhatToCount == SmallAndCapitelLetters &&
            (str[i] == tolower(ch) || str[i] == toupper(ch)))
            counter++;
    }


    return counter;
}

void PrintLetterCounts(string input, char ch)
{
    short countCapital = LettersSereshCount(input, ch, CapitelLetters);
    short countSmall = LettersSereshCount(input, ch, SmallLetters);
    short countBoth = LettersSereshCount(input, ch, SmallAndCapitelLetters);

    cout << "\nResults:\n";
    cout << "----------------------\n";
    cout << "Capital '" << char(toupper(ch)) << "' count = " << countCapital << endl;
    cout << "Small   '" << char(tolower(ch)) << "' count = " << countSmall << endl;
    cout << "Both Capital & Small  count = " << countBoth << endl;
}


int main()
{
    string input = ReadStr();
    char ch = ReadChar();

    PrintLetterCounts(input, ch);

    return 0;
}