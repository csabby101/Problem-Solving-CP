// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	ll n;
	cin >> n;

	while(n != 1)	
	{
		cout << n << ' ';
		if(n % 2 == 0)
			n /= 2;
		else
		{
			n *= 3;
			n += 1;
		}
	}
	cout << n;
}