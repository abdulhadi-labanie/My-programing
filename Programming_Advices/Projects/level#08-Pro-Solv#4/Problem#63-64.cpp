#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stDate {
    string Year;
    string Month;
    string Day;
};

vector <string> WriteWordsOfSutringInVector(string str, string delim = " ")
{
    vector <string> Words;
    string word;
    short pos = 0;

    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != " ")
        {
            Words.push_back(word);
        }

        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        Words.push_back(str);
    }

    return Words;
}

bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year, short Month) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool Check_STR_Date(string strDate, vector <string> vWords)
{
    if (vWords.size() != 3)
        return false;

    for (int i = 0; i < 3; i++) {
        for (char c : vWords[i]) {
            if (!isdigit(c))
                return false;
        }
    }

    int day = stoi(vWords[0]);
    int month = stoi(vWords[1]);
    int year = stoi(vWords[2]);

    if (month < 1 || month > 12)
        return false;

    if (day < 1 || day > NumberOfDaysInAMonth(year, month))
        return false;

    if (year < 1 || year > 30000)
        return false;

    return true;
}

string ReadDateString()
{
    string strDate;

    cout << "Please Enter Date dd/mm/yyyy : ";
    getline(cin, strDate);

    return strDate;
}

vector <string> FixVectorDate(string strDate)
{
    vector <string> vWords = WriteWordsOfSutringInVector(strDate, "/");

    while (!Check_STR_Date(strDate, vWords))
    {
        cout << "\n\nError Date Fill!!!\n";
        cout << "Please Enter Date dd/mm/yyyy : ";
        getline(cin, strDate);

        vWords = WriteWordsOfSutringInVector(strDate, "/");
    }

    return vWords;
}


stDate FillvDateInStruct(vector <string> vDate)
{
    stDate Date;

    Date.Day = vDate[0];
    Date.Month = vDate[1];
    Date.Year = vDate[2];

    return Date;
}

void PrinStructDate(stDate Date)
{
    cout << "Day: " << Date.Day << endl;
    cout << "Month: " << Date.Month << endl;
    cout << "Year: " << Date.Year << endl;
}

string SwithsSTDateToSTR(stDate Date)
{
    string strDate = "";

    return Date.Day + "/" + Date.Month + "/" + Date.Year;
}

int main() {
    string strDate = ReadDateString();
    vector <string> vWords = FixVectorDate(strDate);

    stDate sDate = FillvDateInStruct(vWords);
    strDate = SwithsSTDateToSTR(sDate);

    PrinStructDate(sDate);

    cout << "You Entered: " << strDate << endl;

    system("pause>0");
    return 0;
}
