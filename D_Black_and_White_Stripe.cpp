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

        string s;
        cin >> s;

        int wht = 0;
        for(int i = 0; i< k; i++)
        {
            if(s[i] == 'W')
            {
                wht++;
            }
        }

        int sum = wht;
        for(int i = k; i<n; i++)
        {
            if(s[i - k] == 'W')
            {
                wht--;
            }

            if(s[i] == 'W')
            {
                wht++;
            }
            sum = min(sum, wht);
        }

        cout << sum << endl;
    }
    

	return 0;
}


