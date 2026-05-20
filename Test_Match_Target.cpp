#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int x, y, z;
    cin >> x >> y >> z;
    
    int sum = x + z - y + 1;
    if(sum < 0)
    {
        sum = 0;
    }

    cout << sum;

	return 0;
}


