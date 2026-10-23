#include <iostream>
#include <string>
using namespace std;

char ReadChar()
{
    char Ch;

    cout << "\nPlease enter a character:\n";
    cin >> Ch;

    return Ch;
}


bool IsVowelLetter(char ch, char Vowels[5])
{
    for (short i = 0; i < 5; i++)
    {
        if (Vowels[i] == tolower(ch))
            return true;
    }

    return false;
}

void PrintVowelCheckResult(char ch, char Vowels[5])
{
    if (IsVowelLetter(ch, Vowels))
        cout << "Yes Letter '" << ch << "' is vowel." << endl;
    else
        cout << "No Letter '" << ch << "' is not vowel!!!" << endl;
}


int main()
{
    char Vaowel[5] = { 'a', 'e', 'i', 'o', 'u' };
    char ch = ReadChar();

    PrintVowelCheckResult(ch, Vaowel);

    return 0;
}