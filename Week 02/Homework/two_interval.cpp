#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (x > b || a > y)
        cout << -1 << endl;
    else
    {
        int start, end;
        if (a < x)
            start = x;
        else
            start = a;

        if (b <= y)
            end = b;
        else
            end = y;
        cout << start << " " << end << endl;
    }

    return (0);
}