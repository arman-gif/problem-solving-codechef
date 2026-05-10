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
        int x, y, z;
        cin >> x >> y >> z;

        int lag = max(x, max(y, z));
        int ans = x + y + z;
        int sum = ans - lag;
        int total = lag - sum + 1;

        if(sum > lag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
    

	return 0;
}


