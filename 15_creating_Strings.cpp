#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <math.h>
#include <cmath>
#include <stack>
#include <array>
#include <iomanip>
#include <bitset>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <deque>
#include <ostream>
#define lo2 log2
#define loop(t) for(int i = 0; i < t; i++)
#define loop0(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
#define repeat(t) while(t--)
#define ll long long
#define pb push_back
#define power pow
#define rep(i,n) for(int i = 0; i < (int) n;i++)
#define mp make_pair
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sh short
#define lli long long int
#define ln endl
#define TEST_CASE int t; cin >> t; while(t--){solve();}
#define INF 2000000000
#define MAXN 2005
#define MOD 10000007
using namespace std;
using namespace __gnu_pbds;
using f = float;
 
 
typedef unsigned long long ull;
typedef vector<pair<int,int>> vp;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<ll> vl;
typedef vector<pair<int,int>> vp;
typedef map<int,int> mpi;
typedef map<ll,ll> mpl;
 
long long gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}
 
long long lcm(int a, int b){
    return (a / gcd(a,b)) * b;
}
 
void debugMode(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
 
 
int Gcd(int x, int y){
    int t;
    while(x % y){
        t = x, x = y, y = t % y;
    }
    return y;
}
 
long long sum(ll num){
    return num * (num  + 1) / 2;
}
 
 
void solve(){
 
}
string s;
vector<string> perms;
int char_count[26];
void search(const string &curr = "") {
    // We've finished creating a permutation
    if (curr.size() == s.size()) {
        perms.push_back(curr);
        return;
    }
    for (int i = 0; i < 26; i++) {
        // For all available characters
        if (char_count[i] > 0) {
            // Add it to the current string and continue the search
            char_count[i]--;
            search(curr + (char)('a' + i));
            char_count[i]++;
        }
    }
}
 
 
int main() {
    IOS
    debugMode();
   // freopen("task.in", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin >> s;
    for(char c : s){
        char_count[c - 'a']++;
    }
 
    search();
 
    cout << perms.size() << endl;
    for(const string &perm: perms) {
        cout << perm << endl;
    }
    return 0;
}
