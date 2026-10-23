#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   int q; cin >> q;
   unordered_map<ll, ll> mp;
   for(int i = 0;i < q; i++)
   {
       int x; cin >> x;
       ll k, v;
       if(x == 0)
       {
           cin >> k >>v;
           mp[k] = v;
       }
       else
       {
           cin >> k;
           cout << mp[k] << "\n";
       }
   }
   
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
