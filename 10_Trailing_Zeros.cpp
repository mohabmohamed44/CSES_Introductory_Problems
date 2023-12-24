#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize ("O3","unroll-loops")
#pragma GCC optimize("inline","-ffast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunicode-whitespace"
using namespace std;
 
#define ll             long long
#define lli            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define vl             vector<ll>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mll            map<ll,ll>
#define loop(i,t)      for(int i = 0; i < t; i++)
#define loop0(i,n)     for(int i = 0; i < n; i++)
#define loop1(i,n)     for(int i = 1; i <= n; i++)
#define repeat(t)      while(t--)
#define mpi            map <pii, int>
#define spi            set <pii>
#define rapid()          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
 
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
 
 
using namespace __gnu_pbds;
#define int long long
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
 
inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}
 
 
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
 
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
 
 
void Go(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
const int N=1e5+10;
 
struct Node {
    int id,idx;
    string s;
}num[N];
 
 
bool comp(Node a, Node b){
    if(a.idx == b.idx) return a.id > b.id;
    return a.idx > b.idx;
}
int n,k,ans;
 
int trailing_zeros(int n){
    if(n < 0)
        return -1;
    int cnt = 0;
    for(int i = 5; n / i >= 1; i *= 5){
        cnt += n / i;
    }
    return cnt;
}
 
void solve(){
    int n;
    cin >> n;
    cout << trailing_zeros(n) << endl;
}
 
 
signed main() {
    rapid()
    Go();
 
    clock_t z = clock();
    //int t;
    //cin >> t;
    //while(t--){
        solve();
    //}
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
