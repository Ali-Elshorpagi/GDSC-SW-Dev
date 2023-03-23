#include <iostream>

using namespace std;

int main()
{
    /*
        => 400
        - 365
        == 35
        400 % 365 = 400 - 365 = 35
        35 % 30 = 35 - 30 = 5
    -------------------------------
        => 800
        800 / 365 = 2
    */
    int days;
    cin >> days;

    // First Way
    int years = days / 365;
    days -= years * 365;    // days = days - (years * 365) == 70
    int months = days / 30; // 2
    days -= months * 30;    // days = days - (months * 30) == 10

    // Second Way
    // int years = days / 365;
    // int months = (days % 365) / 30;
    // days = (days % 365) % 30;

    cout << years << " years" << endl
         << months << " months" << endl
         << days << " days" << endl;
    return (0);
}