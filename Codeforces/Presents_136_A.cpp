// https://codeforces.com/contest/136/problem/A 

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		v[x] = i;
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';
}