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
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        if(sum % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int total = sum / 2;
        if(a == total || b == total || c == total || a + b == total || a + c == total || b + c == total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

	return 0;
}


