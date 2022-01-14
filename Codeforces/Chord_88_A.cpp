// problem link : https://codeforces.com/problemset/problem/88/A

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
    vector<string> v =  {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

    vector<string> vi(3);
    vector<int> s;
    for (int i = 0; i < 3; i++)
    {
        cin >> vi[i];
        for (int j = 0; j < 12; j++)
        {
            if(vi[i] == v[j])
                s.PB(j + 1);
        }
    }
    sort(s.begin(), s.end());

    for (int i = 0; i < 3; i++)
    {   
        int d1 = 0, d2 = 0;
        if(s[i] > s[(i + 1) % 3])
            d1 = 12 - abs(s[i] - s[(i + 1) % 3]);
        else
            d1 = abs(s[i] - s[(i + 1) % 3]);
        
        if(s[(i + 1) % 3] > s[(i + 2) % 3])
            d2 = 12 - abs(s[(i + 1) % 3] - s[(i + 2) % 3]);
        else
            d2 = abs(s[(i + 1) % 3] - s[(i + 2) % 3]);

        if(d1 == 4 && d2 == 3)
        {
            cout << "major";
            return;
        }

        else if (d1 == 3 && d2 == 4)
        {
            cout << "minor";
            return;
        }
    }

    cout << "strange"; 
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
    cerr << "\n-----------------" << "\nTime : " << duration.count()/1000000.0000 << " s" << endl;
#endif
}