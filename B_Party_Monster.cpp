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
        int op = 0;
        int cl = 0;

        for(int i = 0; i< s.size(); i++)
        {
            char c = s[i];
            if(c == '(')
            {
                op++;
            }
            else
            {
                op--;
            }

            cl = min(cl, op);
        }

        if(op != 0)
        {
            cout << "NO" << endl;
        }
        else if(cl <= 1)
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



