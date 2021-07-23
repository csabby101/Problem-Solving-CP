#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int summ(int x)
{
	int res = 0;
	while(x)
	{
		int d = x % 10;
		res += d;
		x /= 10;
	}
	return res;
}

int main()
{
	int sumA = 0, sumB = 0;

	int A, B;
	cin >> A >> B;

	cout << max(summ(A), summ(B));
}