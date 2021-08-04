// https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int minn = min(n, m);

    if (minn % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
}