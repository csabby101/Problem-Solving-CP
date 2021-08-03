// https://cses.fi/problemset/task/2163/
// reference : https://www.geeksforgeeks.org/find_by_order-in-cpp/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define endl "\n"
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;

void deathnote (int n, int k)
{
    oset u;

    for (int i = 1; i <= n; i++)
    {
        u.insert(i);
    }

    int index = 0;
    while (u.size() >= 1)
    {
        index = (index + k) % u.size();
        auto it = u.find_by_order(index);
        cout << *it << ' ';
        u.erase(*it);
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    deathnote(n, k);
}