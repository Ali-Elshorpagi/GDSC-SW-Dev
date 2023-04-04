#include <iostream>
#include <algorithm> // to use min() & max() & swap()

using namespace std;

int main()
{
    // the code was modified to work with negative & positive numbers;
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    // first we must Ensure that (a <= b) and (x <= y)
    // we made this steps cus the negetive values;
    if (a > b)
        swap(a, b);
    if (x > y)
        swap(x, y);

    // check for the intersection
    if (x > b || a > y)
        cout << "-1\n";
    else
    {
        int start, end;
        // start = max(a,x);
        // end  = min(b,y);
        if (a < x)
            start = x;
        else
            start = a;

        if (b < y)
            end = b;
        else
            end = y;
        cout << start << " " << end << "\n";
    }

    /* another solution using built in functions, if u interest */
    // int start = max(min(a, b), min(x, y));
    // int end = min(max(a, b), max(x, y));

    // if (start > end)
    //     cout << "-1\n";
    // else
    //     cout << start << " " << end << "\n";

    return (0);
}