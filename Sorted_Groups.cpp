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

        string ans = " ";
        for(int i = 0; i <=n; i++)
        {
            vector<int> l(26, 0), r(26, 0);
            for(int j = 0; j < i; j++)
            {
                l[s[j] - 'a']++;
            }

            for(int j = i; j< n; j++)
            {
                r[s[j] - 'a']++;
            }

            string total = " ";
            for(int k = 0; k< 26; k++)
            {
                total = total + string(l[k], 'a' +k);
            }

            for(int k = 0; k < 26; k++)
            {
                total = total + string(r[k], 'a' + k);
            }

            ans = max(ans, total);
        }

        cout << ans << endl;
    }
    

	return 0;
}


