// https://cses.fi/problemset/task/2162/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	int k = 2;

	vector<int> v(n + 1, 1);

	int count = 0, i = 1, death = 0, index = 0;

	while (count != n)
	{
		index = ((i - 1) % n) + 1;

		if (v[index] == 0)
		{
			count++;
		}
		else if (v[index] == 1)
		{
			count = 0;
			death++;
		}
		if (death == k && v[index] == 1)
		{
			v[index] = 0;
			cout << index << ' ';
			death = 0;
		}

		i++;
	}
}