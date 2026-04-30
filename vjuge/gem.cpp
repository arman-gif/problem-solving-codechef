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
        long long r, b, g;
        cin >> r >> b >> g;

        long long sum = (r + b + g) * 3;
        long long total = min(r, min(b, g));

        cout << sum + total << endl;
    }
    

	return 0;
}


