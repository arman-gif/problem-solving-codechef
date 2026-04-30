#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int x;
    cin >> x;

    int pay1 = 100 + 4 * x;
    int pay2 = 300;

    int sum = min(pay1, pay2);
    cout << sum;

	return 0;
}


