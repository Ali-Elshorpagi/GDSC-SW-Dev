#include <iostream>

using namespace std;

int main()
{

	long l1, r1, l2, r2, sum, line;
	long lx, rs, ls, rx;
	cin >> l1 >> r1 >> l2 >> r2;
	sum = (r1 - l1) + (r2 - l2);

	lx = l1, rs = r1, ls = l2, rx = r2;
	if (lx < l2)
		lx = l2, ls = l1;
	if (rs > r2)
		rs = r2, rx = r1;

	line = rx - ls;

	if (line > sum)
	{
		cout << -1;
	}
	else
	{
		cout << lx << " " << rs;
	}
	return 0;
}
