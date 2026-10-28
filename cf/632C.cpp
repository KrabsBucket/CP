#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   int n; cin >> n;
   vector<string> a(n);
   for(int i = 0; i < n; i++)
   {
       string st; cin >> st;
       a[i] = st;
   }

   sort(a.begin(),a.end(), [](const string&a , const string& b){
           return a + b < b + a;
           });

   string ans = "";
   for(string &x : a)
   {
       ans += x;
   }
   cout << ans << "\n";


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
