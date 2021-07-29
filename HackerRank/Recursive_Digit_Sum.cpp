// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string s; int k;
	cin >> s >> k;
	int sz = s.size();

	int sum = 0;

	for (int i = 0; i < sz; i++)
	{
		int x = s[i] - '0';
		sum = (sum + x) % 9;
	}			

	int d_sum = (sum * k) % 9;

	(d_sum == 0) ? (cout << 9) : (cout << d_sum);
}