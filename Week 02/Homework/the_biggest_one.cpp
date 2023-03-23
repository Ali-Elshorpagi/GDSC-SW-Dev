#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mx = INT_MIN;
    if (a < 100 && a > mx)
        mx = a;
    if (b < 100 && b > mx)
        mx = b;
    if (c < 100 && c > mx)
        mx = c;

    if (mx == INT_MIN)
        cout << -1 << endl;
    else
        cout << mx << endl;

    return (0);
}