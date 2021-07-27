// https://codeforces.com/contest/136/problem/A 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int> > v;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		v.PB(MP(x, i));
	}

	sort(v.begin(), v.end());

	for (auto &val : v)
	{
		cout << val.S << ' ';
	}
}