#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, x;
    cin >> n >> x;

    int a[n];
    bool sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == x)
        {
            sum = 1;
        }
    }

    if(sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

	return 0;
}


