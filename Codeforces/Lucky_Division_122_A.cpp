// https://codeforces.com/contest/122/problem/A 

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

	int n;
	cin >> n;

	for (int i = 0; i < 14; i++)
	{
		if(n % arr[i] == 0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}