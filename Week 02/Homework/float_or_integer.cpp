#include <iostream>

using namespace std;

int main()
{
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