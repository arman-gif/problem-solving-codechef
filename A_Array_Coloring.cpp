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

        int a[105];
        int p[105];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            p[a[i]] = i;
        }

        bool ans = 1;
        for(int i = 1; i< n; i++)
        {
            if((p[i] % 2) == (p[i + 1] % 2))
            {
                ans = 0;
            }
        }

        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

	return 0;
}




