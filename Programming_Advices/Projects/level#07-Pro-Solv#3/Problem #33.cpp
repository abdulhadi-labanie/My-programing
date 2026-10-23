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


bool IsVowelLetter(char Ch1)
{
    Ch1 = tolower(Ch1);
    return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' ||
        Ch1 == 'o' || Ch1 == 'u');
}

short CountVowelLetters(string str)
{
    short counter = 0;

    for (short i = 0; i < str.length(); i++)
    {
        if (IsVowelLetter(str[i]))
            counter++;
    }

    return counter;
}


int main()
{
    string UserSTR = ReadStr();

    short VowelCount = CountVowelLetters(UserSTR);

    cout << "Numer of vowels is: " << VowelCount << endl;

    return 0;
}