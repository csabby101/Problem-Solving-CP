// https://codeforces.com/problemset/problem/144/A
// complicated vector approach using reverse iterators 
// and converting reverse iterator to nomal iterator using .base() function at line 25 
// For reference : https://stackoverflow.com/questions/2037867/can-i-convert-a-reverse-iterator-to-a-forward-iterator

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
	auto minn = (min_element(v.rbegin(), v.rend()) + 1).base();
 
	for (auto it = minn; it != --v.end(); it++)
	{
		swap(*it, *(it + 1));
		steps++;
	}
 
	auto max = max_element(v.begin(), v.end());
	steps += max - v.begin();
 
	cout << steps;
}