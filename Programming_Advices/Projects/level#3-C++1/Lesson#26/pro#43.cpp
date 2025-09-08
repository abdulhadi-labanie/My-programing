#include <iostream>
using namespace std;

int main()
{
    int days, hours, minutes, seconds;
    int total_sen;

    cout << "Enter total seconds: ";
    cin >> total_sen;

    days = total_sen / (24 * 3600);           // ÍÓÇÈ ÇáÃíÇã
    total_sen = total_sen % (24 * 3600);      // ÊÍÏíË ÇáËæÇäí ÇáãÊÈŞíÉ ÈÚÏ ÇáÃíÇã

    hours = total_sen / 3600;                 // ÍÓÇÈ ÇáÓÇÚÇÊ
    total_sen = total_sen % 3600;             // ÊÍÏíË ÇáËæÇäí ÇáãÊÈŞíÉ ÈÚÏ ÇáÓÇÚÇÊ

    minutes = total_sen / 60;                 // ÍÓÇÈ ÇáÏŞÇÆŞ
    seconds = total_sen % 60;                 // ÍÓÇÈ ÇáËæÇäí ÇáãÊÈŞíÉ ÈÚÏ ÇáÏŞÇÆŞ

    // ØÈÇÚÉ ÇáäÊíÌÉ
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";

    return 0;
}
