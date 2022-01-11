// link : https://assessment.hackerearth.com/challenges/college/screening-test-batch2k17/algorithm/7ddc4a46d5e341c1ba1420117d9e6f8c/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 10;
int arr[27][N];

int main()
{
	fastio;

	int t;
	cin >> t;

	while (t--)
	{
		int n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		for (int i = 1; i <= 26; i++)
		{
			for (int j = 0; j < n; j++)
			{
				arr[i][j] = 0;
			}
		}

		for (int i = 1; i <= 26; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((s[j] - 'a' + 1) == i)
					arr[i][j]++;
				if (j)
					arr[i][j] += arr[i][j - 1];
			}
		}

		while (q--)
		{
			int L, R;
			cin >> L >> R;
			L--; R--;
			int oddCt = 0;
			for (int i = 1; i <= 26; i++)
			{
				int freq = arr[i][R] - arr[i][L - 1];
				// if (freq > 0)
				// 	cout << i << ' ' << freq << endl; 
				if(freq % 2 == 1)
					oddCt++;
			}

			if (oddCt > 1)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
		cout << endl;
	}
}


// Sample Test Case
// 3
// 9 6
// abccdccba
// 1 1
// 1 5
// 1 9
// 3 7
// 3 6
// 3 4
// 5 5
// abcec
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4
// 5 5
// aabbc
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4

// Output
// YES
// NO
// YES
// YES
// NO
// YES

// NO
// NO
// YES
// NO
// NO

// YES
// NO
// YES
// YES
// YES