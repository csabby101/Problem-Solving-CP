// https://atcoder.jp/contests/abc187/tasks/abc187_d

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

bool sortbysum_desc(pair<int, int> &a, pair<int, int> &b)
{
	if(a == b)
		return false;
	
	return ((2 * a.first) + a.second) > ((2 * b.first) + b.second);

	// what I actually did in the beginning is given below
	// ! return (a.second + a.first) > (b.second + b.first);
	// ! refer notes at the bottom for details
}

signed main()
{
	fastio;

	int n;
	cin >> n;

	vector<pair<int, int> > v;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}

	sort(v.begin(), v.end(), sortbysum_desc);

	// for (auto &val : v)
	// {
	// 	cout << val.first << ' ' << val.second << endl;
	// }

	int arrf[n + 10];
	arrf[n] = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		arrf[i] = arrf[i + 1] + v[i].first;
	}

	int arrsum[n + 10];
	arrsum[0] = v[0].first + v[0].second;

	for (int i = 1; i < n; i++)
	{
		arrsum[i] = arrsum[i - 1] + v[i].first + v[i].second;
	}

	int count = 1;

	for (int i = 0; i < n - 1; i++)
	{
		if(arrsum[i] > arrf[i + 1])
			break;

		count++;
	}

	cout << count;
}

// !!!
// Messed up several test cases due to initial approach of sorting on the basis of a[i] + b[i]
// check out D_187_my_issues.txt in the directory for comparisons

// how my initial comparator looked like --
// 	bool sortbysum_desc(pair<int, int> &a, pair<int, int> &b)
// 	{
// 		if(a == b)
// 			return false;
// 		else if((a.second + a.first) == (b.second + b.first))
// 			return a.first > b.first;

// 		return (a.second + a.first) > (b.second + b.first);
// 	}

// test case for why I added line 83 and 84 initially, 
// which could be removed later as inclusive by line 15 in the working code
// 6
// 5 3 
// 2 5
// 6 1
// 3 3
// 3 3
// 3 3


// Now, consider the test case given below, jispe mera uppar wala code phat gaya :
// 3
// 1 4
// 3 1
// 2 0

// pleej refer this thread --> https://codeforces.com/blog/entry/86254?#comment-742051
// and this :) --> https://codeforces.com/blog/entry/86254?#comment-742102