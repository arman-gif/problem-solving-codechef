#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, sum;
    cin >> n >> sum;
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;

    }
    sort(a.begin(), a.end());
    int l = 0, r= n-1;

    while (l < r)
    {
        int cur = a[l].first + a[r].first;
        if(cur == sum)
        {
            cout << a[l].second << " " << a[r].second << endl;
            return 0;
        }
        else if(cur > sum)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE" << endl;

	return 0;
}


