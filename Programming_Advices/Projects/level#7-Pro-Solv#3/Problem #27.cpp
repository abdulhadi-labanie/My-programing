#include <iostream>
#include <cctype> // for toupper, tolower
using namespace std;

char ReadChar()
{
    char ch;
    cout << "Please enter a character: ";
    cin >> ch;
    return ch;
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

int main()
{
    char input = ReadChar();

    cout << "Inverted character: " << InvertCharacter(input) << "\n";

    system("pause>0");
    return 0;
}