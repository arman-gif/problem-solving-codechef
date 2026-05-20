#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        long long q;
        cin >> n >> k >> q;

        vector<long long> a(n);
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;
        long long sum = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] <= q)
            {
                sum++;
            }
            else
            {
                if(sum >= k)
                {
                    long long total = sum - k + 1;
                    ans = ans + (total * (total + 1) / 2);
                }
                sum = 0;
            }
        }

        if(sum >= k)
        {
            long long total = sum - k + 1;
            ans = ans + (total * (total + 1) / 2);
        }

        cout << ans << endl;
    }
    

	return 0;
}


