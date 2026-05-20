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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i< n; ++i)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for(int i = 0; i<n; ++i)
        {
            mp[a[i]]++;
        }

        set<int> available;
        for(int i = 0; i<=n; ++i)
        {
            int ans1 = mp[i];
            // cout << i << " available set -> ";
            // for(auto v: available)
            // {
            //     cout << v << ' ';
            //     cout << endl;
            // }
            int ans2 = i - available.size();
            // cout << "ans2 = " << endl << endl;

            int ans = max(ans1, ans2);
            cout << ans << ' ';

            if(mp[i])
            {
                available.insert(i);
            }
        }
        cout << endl;
    }
    

	return 0;
}


