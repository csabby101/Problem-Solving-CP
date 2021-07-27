// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

#define MP make_pair

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;
	int szz = s.size();
	unordered_map<int, char> m;
	m['h'] = 1;
	m['e'] = 2;
	m['l'] = 4;
	m['o'] = 5;

	int q = szz + 1;
	unordered_map<int, int> v = {MP(0, -1), MP(1, q),
	                             MP(2, q), MP(3, q),
	                             MP(4, q), MP(5, q)};

	int count = 0;

	for (int i = 0; i < szz; i++)
	{
		if (v[m[s[i]]] == q && i > v[m[s[i]] - 1])
		{
			v[m[s[i]]] = i;
			count++;
		}

		else if (s[i] == 'l' && v[3] == q && i > v[2])
		{
			v[3] = i;
			count++;
		}

		if (count == 5)
			break;
	}

	if (count == 5)
		cout << "YES";
	else
		cout << "NO";
}