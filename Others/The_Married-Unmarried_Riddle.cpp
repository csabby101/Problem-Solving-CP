// ICPC Amritapuri Prelims 2021 : Problem E
// https://codedrills.io/contests/icpc-amritapuri-2020-preliminary-round/problems/the-married-unmarried-riddle

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int index_m = n, flag = 0;


        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M' && index_m == n)
                index_m = i;
            
            if (s[i] == 'U' && i > index_m)
            {
                cout << "Yes" << endl;
                flag++;
                break;
            }
        }

        if(!flag)
            cout << "No" << endl;
    }
}