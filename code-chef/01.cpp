#include<bits/stdc++.h>
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
        vector<int> a(n);
        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if(s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            map<int, char> numOfChar;
            map<char, int> charOfNum;

            int i;
            for(i = 0; i<n; i++)
            {
                if(numOfChar.count(a[i]) && numOfChar[a[i]] != s[i])
                {
                    cout << "NO" << endl;
                    break;
                }

                if(charOfNum.count(s[i]) && charOfNum[s[i]] != a[i])
                {
                    cout << "NO" << endl;
                    break;
                }

                numOfChar[a[i]] = s[i];
                charOfNum[s[i]] = a[i];
            }

            if(i == n)
            {
                cout << "YES" << endl;
            }
            
        }

    }
    

    return 0;
}



