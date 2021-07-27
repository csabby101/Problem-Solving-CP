#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MP make_pair

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n + 1), psum(n + 1), sfsum(n + 2);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		v[i] = x;
	}

	sort(v.begin() + 1, v.end(), greater<int>());

	for (int i = 1; i <= n; i++)
	{
		psum[i] = v[i] + psum[i - 1];
	}

	for (int i = n; i > 0; i--)
	{
		sfsum[i] = sfsum[i + 1] + v[i];
	}

	int index = n;
	for (int i = 1; i <= n; i++)
	{
		if(psum[i] > sfsum[i + 1])
		{
			index = i;
			break;
		}
	}

	cout << index;
}