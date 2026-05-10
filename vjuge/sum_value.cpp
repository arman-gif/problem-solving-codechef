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
    int x, y;
    bool paici = false;
    for(int i = 0; i < n; i++)
    {
        int lag = sum - a[i].first;
        int l = i+1, r= n-1;
        while (l<r)
        {
            int cur = a[l].first + a[r].first;
            if(cur == lag)
            {
                paici = true;
                x = a[i].second;
                y = a[l].second;
                
               
                break;
            }
            else if(cur > lag)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        
    }

    if(paici)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

	return 0;
}


