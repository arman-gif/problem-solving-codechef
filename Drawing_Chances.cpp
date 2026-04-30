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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;
        int alice = 0, bob = 0;

        for(int i = 0; i<m; i++)
        {
            if(s[i] == '1')
            {
                alice++;
            }
            else
            {
                bob++;
            }
        }

        if(n % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }

        int sum = n / 2;
        if(alice <= sum && bob <= sum)
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



