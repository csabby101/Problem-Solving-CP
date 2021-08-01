// https://codedrills.io/problems/colorful-holi

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)	
	{
		int n, x, y, k;
		cin >> n >> x >> y >> k;
		
		unordered_map<int, int> u;
		int replacable = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			u[x]++;
			if(u[x] > 1)
				replacable++;
		}

		for (int i = x; i <= y; i++)
		{
			if(replacable && k && u[i] == 0)
			{
				u[i]++;
				replacable--;
				k--;
			}
			if(!k || !replacable)
				break;
		}

		int diff_new = u.size();
		cout << diff_new << endl;
	}
}