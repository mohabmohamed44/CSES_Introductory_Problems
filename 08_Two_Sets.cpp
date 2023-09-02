#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
void runFile(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
void solve(){
 
}
 
int main()
{
    fast_cin();
    runFile();
    int n;
    cin >> n;
    if(n*(n+1)/2%2) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> v1,v2;
    int j = 0;
    if(n % 4)
        j = 3;
     else 
        j = 4;
    
    for(int i=0; i<(n-1)/4; ++i){
        v1.push_back(4 * i + 1 + j);
        v1.push_back(4 * i + 4 + j);
        v2.push_back(4 * i + 2 + j);
        v2.push_back(4 * i + 3 + j);
    }
    if(n%4) {
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
    } else {
        v1.pb(1);
        v1.pb(4);
        v2.pb(3);
        v2.pb(2);
    }
    cout << "YES\n";
    
    cout << v1.size() << endl;
    for(int i : v1)
        cout << i << " ";
    cout << endl;
 
    cout << v2.size() << endl;
    for(int i : v2)
        cout << i << " ";
    cout << endl;
}
