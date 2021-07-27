#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second
#define PB push_back
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

	int q = szz + 5;
	unordered_map<int, int> v;
	v[1] = q;
	v[2] = q;
	v[3] = q;
	v[4] = q;
	v[5] = q;
	int count = 0;
	
	for (int i = 0; i < szz; i++)
	{
		if(s[i] == 'h' && v[1] == q)
		{
			v[1] = i;
			count++;
		}

		else if(s[i] == 'l' && v[3] == q && i > v[2])
		{
			v[3] = i;
			count++;
		}
		else if(v[m[s[i]]] == q && i > v[m[s[i]] - 1])
		{
			v[m[s[i]]] = i;
			count++;
		}
	}

	//cout << count << endl;
	if(count == 5)
		cout << "YES";
	else
		cout << "NO";
}