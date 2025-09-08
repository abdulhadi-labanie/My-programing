#include <iostream>
#include <string>
using namespace std;

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

short SereshCount(string str, char ch)
{
    short count = 0;

    for (short i = 0; i < str.length(); i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string input = ReadStr();
    char ch = ReadChar();

    cout << "\nLetter '" << ch << "' count = " << SereshCount(input, ch) << endl;

    return 0;
}