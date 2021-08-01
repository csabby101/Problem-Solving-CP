// https://codedrills.io/problems/stack-of-boxes

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)	
	{
		ll a, b, c;
		cin >> a >> b >> c;

		ll sum = a + b + c;
		ll f = sum / 4;  // factor

		if(sum % 4 == 0)
		{
			if(a >= f && b >= f && c >= f)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

		else
			cout << "NO" << endl;
	}
}