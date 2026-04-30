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

        vector<int> a(n);
        for(int i =0; i< n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        int total = 1e9;
        for(int i= 0; i < n; i++)
        {
            int b;
            cin >> b;
            sum = sum + a[i];
            total = min(total, a[i] - b);
        }

        int cn = sum - total;
        cout << cn << endl;

    }
    

	return 0;
}


