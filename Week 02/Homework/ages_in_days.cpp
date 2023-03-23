#include <iostream>

using namespace std;

int main()
{
    int days;
    cin >> days;

    // First Way
    int years = days / 365;
    days -= years * 365;
    int months = days / 30;
    days -= months * 30;

    // Second Way
    // int years = days / 365;
    // int months = (days % 365) / 30;
    // days = (days % 365) % 30;

    cout << years << " years" << endl
         << months << " months" << endl
         << days << " days" << endl;
    return (0);
}