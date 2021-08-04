// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair


int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)	
	{
		int n, k;
		cin >> n >> k;

		multiset<ll> ms;

		while(n--)
		{
			ll x;
			cin >> x;
			ms.insert(x);
		}

		ll count = 0;
		while(k--)
		{
			auto it = ms.end();
			ll val = *(--it);
			count += val;
			ll val_new = val / 2;
			ms.erase(it);
			ms.insert(val_new);
		}

		cout << count << endl;
	}
}				