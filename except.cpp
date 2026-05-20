#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int x, y;
    cin >> x >> y;

    int total = x * 100;
    int ex = y - x;
    total = total + (ex * 150);

    cout << total << endl;

	return 0;
}


