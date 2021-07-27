// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n + 1), psum(n + 1);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		v[i] = x;
		sum += x;
	}

	sort(v.begin() + 1, v.end(), greater<int>());

	int index = n;
	for (int i = 1; i <= n; i++)
	{
		psum[i] = v[i] + psum[i - 1];
		int sfsum = sum - psum[i];
		if(psum[i] > sfsum)
		{
			index = i;
			break;
		}
	}

	cout << index;
}