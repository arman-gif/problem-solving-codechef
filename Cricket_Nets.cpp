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
        int x;
        cin >> x;

        int ans;
        if(x <= 20)
        {
            ans = x * 10;
        }
        else
        {
            int sum = x - 20;
            int total = sum / 2;
            ans = (20 * 10) + (total * 5);
        }

        cout << ans << endl;

    }
    

	return 0;
}



