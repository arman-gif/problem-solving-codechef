#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<long long> p(n + 1, 0);
        for(int i = 0; i < n; i++)
        {
            p[i + 1] = p[i] + a[i];
        }

        long long ans = 1e18;
        for(int i = 0; i<n; i++)
        {
            int j = m - a[i];
            long long left = p[i] + 1LL * i * j;
            long long right = (p[n] - p[i]) + 1LL * (n - i) * j - 1LL * (n - i) * m;
            ans = min(ans, left + right);
        }

        ans = min(ans, p[n]);
        cout << ans << endl;

    }

    return 0;
}


