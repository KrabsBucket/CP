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
   int n, k, p; cin >> n >> k >>p;
   if(k == 0)
   {
       cout << 0 << "\n";
   }
   else if(k < 0)
   {
       int x = (k + (1 - p))/p ;
       cout << (n >= (-x) ? (-x) : -1)<< "\n";
   }
   else
   {
       int x =  (k + (p-1))/p ;
       cout << (n >= x ? x : -1) << "\n";
   }
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
