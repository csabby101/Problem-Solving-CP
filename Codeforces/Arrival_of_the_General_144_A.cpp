// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
 
	int n;
	cin >> n;
 
	int arr[n];
	int min = INT_MAX, index_min = 0;
	int max = INT_MIN, index_max = 0;
 
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		if(x > max)
		{
			max = x;
			index_max = i;
		}
		if(x <= min)
		{
			min = x;
			index_min = i;
		}
	}

	int steps = index_max + (n - 1 - index_min);
	
	if(index_max > index_min)
		cout << steps - 1;
 	else
		cout << steps;
}