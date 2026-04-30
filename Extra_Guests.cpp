#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	long long x, y;
    cin >> x >> y;
    long long sum = 100 * x;

    if(y > x)
    {
        sum = sum + 150 * (y - x);
    }

    cout << sum << endl;

	return 0;
}



