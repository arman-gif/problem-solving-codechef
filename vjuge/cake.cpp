#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m;
    cin >> n >> m;

    int ans = m - n;
    int total = min(n, ans);

    cout << total << endl;

	return 0;
}


