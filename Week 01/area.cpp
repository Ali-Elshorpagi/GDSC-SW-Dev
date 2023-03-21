#include <iostream>

using namespace std;

/**
 * main - a program that calculates the area of a circle given it radius
 * Return: Always 0 (Success)
 */
int main()
{
    double r, area;

    // read the radius from user
    cin >> r;

    // calculates the area based on the equation
    area = 3.14 * r * r;

    // print the result
    cout << area << endl;
    return 0;
}