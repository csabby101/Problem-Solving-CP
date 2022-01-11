//https://www.codechef.com/problems/GCDQ

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int gcd_i(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd_i(b, a % b);
}

int main()
{
	fastio;

	int t;
	cin >> t;

	while (t--)
	{
		int n, q;
		cin >> n >> q;

		int arr[n + 10];
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}

		int pre[n + 10] = {0};
		int suff[n + 10] = {0};

		pre[1] = arr[1];
		for (int i = 2; i <= n; i++)
		{
			pre[i] = gcd_i(arr[i], pre[i - 1]);
		}

		suff[n] = arr[n];
		for (int i = n - 1; i >= 1; i--)
		{
			suff[i] = gcd_i(arr[i], suff[i + 1]);
		}

		while (q--)
		{
			int l, r;
			cin >> l >> r;
			cout << gcd_i(pre[l - 1], suff[r + 1]) << endl;
		}
	}
}


//--------------------------------------------------------------------------
// ye nhi chala 

// #include <bits/stdc++.h>
// using namespace std;

// #define endl "\n"

// #define fastio ios::sync_with_stdio(0); cin.tie(0);

// const int N = 1e5 + 7;
// int pre[N], suff[N];

// int gcd(int a, int b)
// {
// 	while (b)
// 	{
// 		a %= b;
// 		swap(a, b);
// 	}

// 	return a;
// }

// void pre_gcd(int array[], int n)
// {
// 	pre[1] = array[1];

// 	for (int i = 2; i <= n; i++)
// 	{
// 		pre[i] = gcd(array[i], pre[i - 1]);
// 	}
// }

// void suff_gcd(int array[], int n)
// {
// 	suff[n] = array[n];

// 	for (int i = n - 1; i >= 1; i--)
// 	{
// 		suff[i] = gcd(array[i], suff[i + 1]);
// 	}
// }

// signed main()
// {
// 	fastio;

// 	int t;
// 	cin >> t;

// 	while(t--)
// 	{
// 		int n, q;
// 		cin >> n >> q;

// 		int arr[n];
// 		for (int i = 1; i <= n; i++)
// 		{
// 			cin >> arr[i];
// 		}

// 		pre_gcd(arr, n);
// 		suff_gcd(arr, n);

		
// 		while(q--)
// 		{
// 			int l, r;
// 			cin >> l >> r;
// 			cout << gcd(pre[l - 1], suff[r + 1]) << endl;
// 		}
// 	}
// }