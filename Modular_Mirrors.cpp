#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (n % 3 != 2) {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> a(n + 2);

        a[0] = 0;
        a[1] = 1;
        a[2] = 1;

        for (int i = 2; i <= n; i++) {
            a[i + 1] = (a[i] - a[i - 1]) % m;
            if (a[i + 1] < 0) a[i + 1] += m;
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}