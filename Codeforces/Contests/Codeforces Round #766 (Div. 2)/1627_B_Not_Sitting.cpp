// problem link : https://codeforces.com/contest/1627/problem/B

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define endl "\n"
#define MOD 1000000007
#define F first
#define S second
#define PB push_back
#define PPB pop_back
#define MP make_pair
#define set_bits __builtin_popcountll
#define REP(a) for (int i = 0; i < a; i++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " : "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(float t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(bool t) {cerr << (t ? "true" : "false");}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(ordered_set v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*___________________________________________________________________________________________________________________________*/
/*---------------------------------------------------------------------------------------------------------------------------*/


void sarthak()
{
    int n, m;
    cin >> n >> m;

    int row = m, column = n;
    vector<int> v;

    for (int i = 1; i <= (n / 2); i++)      
    {
        for (int j = 1; j <= (m / 2); j++)
        {
            int dis = (n - i) + (m - j);
            REP(4) v.PB(dis);
        }
    }

    row -= (m / 2) * 2;
    if(row)
    {
        int i = (m / 2) + 1;
        for (int j = 1; j <= (n / 2); j++)
        {
            int dis = (n - i) + (m - j);
            REP(2) v.PB(dis);
        }
    }

    column -= (n / 2) * 2;
    if(column)
    {
        int j = (n / 2) + 1;
        for (int i = 1; i <= (m / 2); i++)
        {
            int dis = (n - i) + (m - j);
            REP(2) v.PB(dis);
        }
    }

    if(m % 2 && n % 2)
        v.PB((m - ((m + 1) / 2)) + (n - ((n + 1) / 2)));
    
    sort(v.begin(), v.end());
    
    for(auto &val : v)
        cout << val << ' ';

    cout << endl;
}

/*___________________________________________________________________________________________________________________________*/
/*---------------------------------------------------------------------------------------------------------------------------*/
int main()
{
#ifndef ONLINE_JUDGE
    freopen("zerror.in", "w", stderr);
#endif

    ios::sync_with_stdio(false); cin.tie(NULL);
    auto start = high_resolution_clock::now();
/*___________________________________________________________________________________________________________________________*/

    int t;
    cin >> t;

    while (t--)
    {
        sarthak();
    }

/*____________________________________________________________________________________________________________________________*/
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
#ifndef ONLINE_JUDGE
    cerr << "\n-----------------" << "\nTime : " << duration.count()/1000000.0000 << " s" << endl;
#endif
}