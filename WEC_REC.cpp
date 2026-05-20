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
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> frq(1001, 0);
        for(int i = 0; i < n; i++)
        {
            int sum;
            cin >> sum;
            frq[sum]++;
        }

        int ans = 0;
        int total = 0;
        for(int sum = 1000; sum >= 0; sum--)
        {
            if(frq[sum] > 0)
            {
                total++;
                ans = ans + frq[sum];
            }
            if(total == k)
            {
                break;
            }
        }
        cout << min(ans, x) << endl;

    }
    

	return 0;
}



