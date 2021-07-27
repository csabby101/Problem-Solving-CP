// https://codeforces.com/problemset/problem/144/A

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
	int min = v[n - 1], index = n - 1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (v[i] < min)
		{
			min = v[i];
			index = i;
		}
	}
 
	for (int i = index; i < n - 1; i++)
	{
		swap(v[i], v[i + 1]);
		steps++;
	}
 
	auto max = max_element(v.begin(), v.end());
	steps += max - v.begin();
 
	cout << steps;
}