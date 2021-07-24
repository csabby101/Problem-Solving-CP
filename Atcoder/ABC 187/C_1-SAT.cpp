// https://atcoder.jp/contests/abc187/tasks/abc187_c

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio;

	int N;
	cin >> N;

	string arr[N + 10];

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> arr[i];
	}
	
	unordered_map<string, int> m;

	for (int i = 0; i < N; i++)
	{
		string s = arr[i];
		
		if(s[0] == '!')
		{
			s.erase(s.begin());
			if(m[s] >= 0)
				m[s] -= INT_MIN;
		}

		else
			m[s]++;
	}

	int count = 0;
	for(auto val : m)
	{
		//cout << val.first << ' ' << val.second << endl;
		if(val.second > INT_MIN && val.second < 0)
		{
			cout << val.first;
			count++;
			break;
		}
	}

	if(count == 0)
		cout << "satisfiable";
}