#include <iostream>
#include <string>
using namespace std;

string ReadStr()
{
    string str;

    cout << "Please enter a character:\n";
    getline(cin, str);

    return str;
}

char InvertCharacter(char ch)
{
    if (isupper(ch))
        return tolower(ch);
    else if (islower(ch))
        return toupper(ch);
    else
        return ch;
}

string InvertSTR(string str)
{
    for (int i = 0; i <= str.length(); i++)
    {
        str[i] = InvertCharacter(str[i]);
    }

    return str;
}

int main()
{
    string input = ReadStr();

    cout << "Sting after Inverting all Letters Case:\n" << InvertSTR(input) << "\n";

    system("pause>0");
    return 0;
}