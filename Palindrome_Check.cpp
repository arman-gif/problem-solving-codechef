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
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;
        bool ans = 1;
        while (l < r)
        {
            if(a[l] == a[r])
            {
                l++;
                r--;
            }
            else if(a[l] == k)
            {
                l++;
            }
            else if(a[r] == k)
            {
                r--;
            }
            else
            {
                ans = 0;
                break;
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


