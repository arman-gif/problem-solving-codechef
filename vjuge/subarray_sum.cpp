#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	long long n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> pre(n + 1);
    for(int i = 1; i<=n; i++)
    {
        pre[i] = pre[i-1] + a[i-1];
    }

    long long cnt = 0;
    map<long long, long long> mp;
    mp[0] = 1;
    for(int r = 1; r<=n; r++)
    {
        long long y = pre[r] - x;
        cnt += mp[y];
        mp[pre[r]]++;
    }

    cout << cnt << endl;

	return 0;
}



