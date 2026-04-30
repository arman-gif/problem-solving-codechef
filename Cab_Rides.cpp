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

        int total = n / 4;
        int sum = n % 4;
        int cnt = total * 400;

        if(sum == 1)
        {
            if(total >= 1)
            {
                cnt = (total - 1) * 400 + 500;
            }
            else
            {
                cnt = 200;
            }
        }
        else if(sum == 2)
        {
            cnt = cnt + 200;
        }
        else if(sum == 3)
        {
            cnt = cnt + 300;
        }

        cout << cnt << endl;
    }
    

    return 0;
}



