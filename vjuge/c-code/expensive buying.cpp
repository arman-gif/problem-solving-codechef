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
        int arr[100];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int ans = 0;
        for(int i = n-1; i >= n - k; i--)
        {
            ans = ans + arr[i];
        }
        cout << ans << endl;

    }
    

	return 0;
}


