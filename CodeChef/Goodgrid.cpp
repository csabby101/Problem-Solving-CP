// https://www.codechef.com/problems/GOODGRID
// editorial : https://discuss.codechef.com/t/goodgrid-editorial/84927

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int sq = n * n;
		int flag = 0;

		if (k == sq)
		{
			cout << "Yes" << endl;
			continue;
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				if (((k % i) == 0) && ((k / i) <= n))
				{
					cout << "Yes" << endl;
					flag++;
					break;
				}
			}
		}

		if (flag == 0)
			cout << "No" << endl;
	}
}