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

        int cnt[26] = {0};
        for(int i = 0; i<n; i++)
        {
            cnt[s[i] - 'a']++;
        }

        bool ans = 0;
        for(int i =0; i < 26; i++)
        {
            if(cnt[i] >= 2)
            {
                ans = 1;
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


