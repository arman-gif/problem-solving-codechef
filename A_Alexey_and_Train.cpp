#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int m;
	cin >> m;
	while(m--)
	{
		int n,t = 0;
		cin >> n;
		int a[n],b[n],tm[n];
		for(int i = 0;i < n;i++) cin >> a[i] >> b[i];
		for(int i = 0;i < n;i++) cin >> tm[i];
		if(n == 1)
		{
			cout << a[0] + tm[0] + 0 << endl;
			continue;
		}
		int da = a[0] + tm[0];
		t += da;
		int ti = (b[0] - a[0] + 1) / 2;
		if(t + ti < b[0])
		{
			t = b[0];
		}
		else t += ti;
		for(int i = 1;i < n;i++)
		{
			da = a[i] - b[i - 1] + tm[i];
			t += da;
			if(i == n - 1) break;
			ti = (b[i] - a[i] + 1) / 2;
			if(t + ti < b[i])
			{
				t = b[i];
			}
			else t += ti;
		}
		cout << t << endl;
	}
	return 0;
}

