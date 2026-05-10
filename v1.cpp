#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int x;
    cin >> x;

    int sum = x / 6;
    int ans = x - sum * 6;
    int total = (100 - sum) * 4;

    while (ans > total)
    {
        sum--;
    }
    cout << sum << endl;

	return 0;
}


