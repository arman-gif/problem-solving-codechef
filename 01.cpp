#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int r, b;
    cin >> r >> b;

    int grn = min(r, b);

    r = r - grn;
    b = b - grn;

    int sum = (grn * 5) + (r * 1) + (b * 2);
    cout << sum << endl;

	return 0;
}


