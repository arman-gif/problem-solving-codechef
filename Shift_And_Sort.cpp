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

        vector<long long> a(n + 2, 0);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        bool ans = 1;
        for(int i = 1; i < n; i++ )
        {
            if(a[i] > a[i + 1])
            {
                if(i + 1 < n && a[i + 1] >= a[i + 2])
                {
                    ans = 0;
                    break;
                }
            }
        }

        if(ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

	return 0;
}



