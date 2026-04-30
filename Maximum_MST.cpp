#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<long long> w(m);

        for(int i = 0; i< m; i++)
        {
            cin >> w[i];
        }

        sort(w.begin(), w.end());
        long long sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            sum = sum + w[i];
        }

        cout << sum << endl;
    }


    return 0;
}



