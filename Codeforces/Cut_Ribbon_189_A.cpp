// problem link : https://codeforces.com/problemset/problem/189/A

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
template <class T> void _print(set <T> v); template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v); template <class T, class V> void _print(unordered_map <T, V> v);
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    set<int> sett;
    sett.insert({a, b, c});

    vector<int> v;
    v.assign(sett.begin(), sett.end());

    int total = 0;

    if (v.size() == 1)
    {
        cout << n / v[0];
        return;
    }

    if (v.size() == 2)
    {
        int num = v[0];
        int mul = n / num;
        if (n % num == 0)
        {
            cout << n / num;
            return;
        }

        for (int j = mul; j >= 0; j--)
        {
            if ((n - (num * j)) % v[1] == 0)
                total += j + (n - (num * j)) / v[1];

            if (total > 0)
            {
                cout << total;
                return;
            }
        }
    }

    set<int> st;
    int num_a = v[0], num_b = v[1], num_c = v[2];
    int mul_a = n / num_a;
    if (n % num_a == 0)
    {
        cout << mul_a;
        return;
    }

    for (int j = mul_a; j >= 0; j--)
    {
        total = 0;
        int rest_a = n - (num_a * j);
        if (rest_a % num_b == 0)
            total = j + (rest_a) / num_b;

        if (total > 0)
            st.insert(total);

        int mul_b = rest_a / num_b;

        for (int k = mul_b; k >= 0; k--)
        {
            int newtotal = 0;
            int rest_b = rest_a - (num_b * k);
            
            if (rest_b % num_c == 0)
                newtotal = j + k + (rest_b / num_c);

            if (newtotal > 0)
            {
                st.insert(newtotal);
                break;
            }
        }
    }

    cout << *st.rbegin();
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

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     sarthak();
    // }

    sarthak();

    /*____________________________________________________________________________________________________________________________*/
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
#ifndef ONLINE_JUDGE
    cerr << "\n-----------------" << "\nTime : " << duration.count() / 1000000.0000 << " s" << endl;
#endif
}