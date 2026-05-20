#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int x, y;
    cin >> x >> y;

    int sums = x * 100;
    int ex = y - x;
    sums = sums + (ex * 150);

    cout << sums << endl;

	return 0;
}

