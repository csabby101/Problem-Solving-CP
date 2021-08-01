// https://codedrills.io/problems/can-the-spider-jump

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int w, l, m, x, y;
        cin >> w >> l >> m >> x >> y;
        int z = max(x, y);
        if (w > m - z )
            cout << "FALL" << endl;
        else
            cout << "JUMP" << endl;
    }
}
