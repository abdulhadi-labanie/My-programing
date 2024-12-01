#include <iostream>
using namespace std;

int main()
{
    short days, hours, minutes;
    short F_days, F_hours, F_minutes, F_seconds;
    int total_seconds;

    cout << "Enter days:\n";
    cin >> total_seconds;


    days = 60 * 60 * 24;
    hours = 60 * 60;
    minutes = 60;
    

    F_days = total_seconds / 86400;
    F_hours = (total_seconds % 86400) / 3600; 
    // ÈÚÏ ÇáÍÕæá Úáì ÚÏÏ ÇáÃíÇã¡ äÃÎĞ ÈÇŞí ÇáŞÓãÉ ãä ÇáÚãáíÉ ÇáÓÇÈŞÉ (modulo 86400).
    // ŞÓãÉ ÇáËæÇäí ÇáãÊÈŞíÉ Úáì 3600 ááÍÕæá Úáì ÚÏÏ ÇáÓÇÚÇÊ.
    F_minutes = (total_seconds % 3600) / 60;
    F_seconds = total_seconds % 60;

    cout << "The total in seconds = " << F_days << ":" << F_hours << ":" << F_minutes << ":" << F_seconds << " seconds.";


    return 0;
}