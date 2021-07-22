// lexographically next greater string
// problem link
// https://www.hackerrank.com/challenges/bigger-is-greater/problem?h_r=profile
// concept reference link
// https://www.nayuki.io/page/next-lexicographical-permutation-algorithm

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int p = n - 1;  //pivot index
        
        for(int i = n - 1; i > 0; i--)
        {
            if(s[i] > s[i - 1])
            {
                p = i - 1;
                break;
            }
        }

        //above loop can be also be replaced by a forward loop as given below
        // for(int i = 0; i < n - 1; i++)
        // {
        //     if (s[i] < s[i + 1])
        //         p = i;
        // }

        if (p < n - 1)
        {
            char small = s[p + 1];
            int np = p + 1;  //new_pivot index

            for(int i = p + 1; i < n; i++)
            {
                if(s[i] <= small && s[i] > s[p])
                {
                    small = s[i];
                    np = i;
                }
            }

            swap(s[p], s[np]);

            reverse(s.begin() + p + 1, s.end());
            cout << s << endl;
        }
        else
            cout << "no answer" << endl;
    }
}