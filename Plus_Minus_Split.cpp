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
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }

        bool en = 1, od = 1;
        for(int i = 0; i< n; i++)
        {
            if(a[i] % 2 == 0)
            {
                od = 0;
            }
            else
            {
                en = 0;
            }
        }

        if(en || od)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }

	return 0;
}










#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);

        long long mn = LLONG_MAX, mx = LLONG_MIN;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            mn = min(mn, A[i]);
            mx = max(mx, A[i]);
        }

        if (N == 1) {
            cout << "Yes\n";
            continue;
        }

        if ((mx - mn) % (N - 1) == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
