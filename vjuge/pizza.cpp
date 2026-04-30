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
        long long a, b;
        cin >> a >> b;

        long long s = 100 * b;
        long long l = 225 * a;

        if(s > l)
        {
            cout << "Small" << endl;
        }
        else if(s < l)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }

    }
    

	return 0;
}


