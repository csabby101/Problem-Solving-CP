// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string t = "hello", s = "";
	cin >> s;

	int j = 0, sz = s.size();

	for (int i = 0; i < sz; i++)
	{
		if(s[i] == t[j])
			j++;

		if(j == 5)
			break;
	}

	if (j == 5)
		cout << "YES";
	else
		cout << "NO";
}