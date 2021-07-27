// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string t = "hello", s = "";
	cin >> s;

	int count = 0, j = 0, sz = s.size();

	for (int i = 0; i < sz; i++)
	{
		if(s[i] == t[j])
		{
			count++;
			j++;
		}

		if(count == 5)
			break;
	}

	if (count == 5)
		cout << "YES";
	else
		cout << "NO";
}