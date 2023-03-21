#include <iostream>

using namespace std;

/**
 * main - a program that prints the last two digits of the product of four nums
 * Return: Always 0 (Success)
 */
int main()
{
    int a, b, c, d;

    // read the fout input nums
    cin >> a >> b >> c >> d;
    // calculate the product
    int product = a * b * c * d;
    // print the last two digits of the product
    cout << product % 100;
    return 0;
}

/* Note that:
 * 12 / 10 = 1
 * 12 % 10 = 2
 * */

