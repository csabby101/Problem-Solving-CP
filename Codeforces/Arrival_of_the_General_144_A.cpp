#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v[i] = x;
	}
	int steps = 0;
	auto min = v.begin();
	for (auto it = v.begin(); it != v.end(); it++)
	{
		if (*it <= *min)
			min = it;
	}

	for (auto it = min; it != --v.end(); it++)
	{
		swap(*it, *(it + 1));
		steps++;
	}

	// for (auto &val : v)
	// {
	// 	cout << val << ' '; 
	// }
	auto max = max_element(v.begin(), v.end());
	steps += max - v.begin();

	cout << steps;
}