#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, k;
    cin >> n >> k;

    int ans = (n / 2) + 1;
    int sum = ans - k;
    if(sum < 0)
    {
        sum = 0;
    }
    cout << sum << endl;

	return 0;
}


