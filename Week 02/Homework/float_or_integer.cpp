#include <iostream>

using namespace std;

int main()
{
    /*
        78.842      54
        78          54
        0.842       0
    */
    double n;
    cin >> n;
    int tmp = (int)n; // casting
    // int tmp = n;
    if (n - tmp == 0)
    {
        cout << "int " << tmp << endl;
    }
    else
    {
        cout << "float " << tmp << " " << n - tmp << endl;
    }
    return (0);
}