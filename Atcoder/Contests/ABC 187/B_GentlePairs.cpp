// https://atcoder.jp/contests/abc187/tasks/abc187_b

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

float slope (pair<float,float> a, pair<float,float>  b)
{
	float res = (b.second - a.second) / (b.first - a.first);
	return res;
}

int main()
{
	vector<pair<float,float> > v;

	float n;
	cin >> n;

	for (float i = 0; i < n; i++)
	{
		float a, b;
		cin >> a >> b;

		v.push_back({a, b});
	}

	float count = 0;
	auto start = v.begin(), end = v.end();
	//wanna use iterators just for the sake of it
	for (auto it = start; it != end - 1; it++)
	{
		for (auto it2 = it + 1; it2 != end; it2++)
		{
			float result = slope((*it), (*it2));
			if (result >= -1 && result <= 1)
			{
				//cout << "success : " << it->first << ' ' << it->second << ' ' << it2->first << ' ' << it2->second << " : " << result << endl;
				count++;
			}
		}
	}
	
	cout << count;
}
