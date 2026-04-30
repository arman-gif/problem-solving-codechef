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
        int sum = 0;
        int ans = 0;

        for(int i = 0; i< n; i++)
        {
            int p = ans + 1;
            
            if(p % 2 == 1)
            {
                if(s[i] == 'u' || s[i] == 'o')
                {
                    ans++;
                }
                else
                {
                    ans = 0;
                    if(s[i] == 'u' || s[i] == 'o')
                    {
                        ans = 1;
                    }
                }
            }
            else
            {
                if(s[i] == 'w')
                {
                    ans++;
                }
                else
                {
                    ans = 0;
                    if(s[i] == 'u' || s[i] == 'o')
                    {
                        ans = 1;
                    }
                }
            }

            if(ans % 2 == 1)
            {
                sum = max(sum, ans);
            }
        
        }

        cout << sum << endl;
    }
    

	return 0;
}


