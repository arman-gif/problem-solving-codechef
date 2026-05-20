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
        string s;
        cin >> s;

        for(int len = 1; len <= n; ++len)
        {
            for(int p = 0; p<n; ++p)
            {
                string tar = s.substr(p, len);
                cout << tar << endl;
            }
        }
    }
    

	return 0;
}


