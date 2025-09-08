#include <iostream>
#include <string>
#include <vector>
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


bool IsVowelLetter(char ch, vector <char> Vowels)
{
    for (char & vowel : Vowels)
    {
        if (vowel == tolower(ch))
            return true;
    }

    return false;
}

short GetVowelLettersOfSTR(string str, vector <char> Vowels, vector <char> & VowelLetters)
{
    short counter = 0;

    for (short i = 0; i < str.length(); i++)
    {
        if (IsVowelLetter(str[i], Vowels))
        {
            VowelLetters.push_back(str[i]);
            counter++;
        }
    }

    return counter;
}

void PrintVowelVector(vector <char> VowelLetters)
{
    for (char& vowel : VowelLetters)
    {
        cout << vowel << "\t";
    }
}

int main()
{
    vector <char> VowelLetters;
    vector <char> vowel = { 'a', 'e', 'i', 'o', 'u' };
    string UserSTR = ReadStr();

    short VowelCount = GetVowelLettersOfSTR(UserSTR, vowel, VowelLetters);

    cout << "Numer of vowels is: " << VowelCount << endl;
    PrintVowelVector(VowelLetters);

    return 0;
}