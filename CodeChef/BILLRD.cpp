// https://www.codechef.com/problems/BILLRD

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll N, K, x, y;
		cin >> N >> K >> x >> y;
		K--;
		int m = K % 4;
		vector<pair<ll, ll> > v;

		if (x > y)
		{
			ll k = N - x;
			v.push_back({N, (y + k)});
			v.push_back({(y + k), N});
			v.push_back({0, (x - y)});
			v.push_back({(x - y), 0});
			cout << v[m].first << ' ' << v[m].second << endl;
		}

		else if (y > x)
		{
			ll k = N - y;
			v.push_back({(x + k), N});
			v.push_back({N, (x + k)});
			v.push_back({(y - x), 0});
			v.push_back({0, (y - x)});
			cout << v[m].first << ' ' << v[m].second << endl;
		}

		else
			cout << N << ' ' << N << endl;
	}
}