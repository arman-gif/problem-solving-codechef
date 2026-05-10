#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m, a;
    cin >> n >> m >> a;

    if(n * a >= m)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

	return 0;
}


