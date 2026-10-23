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
    ll x, y, k; cin >> x >> y >>k;
    if(x == y)
    {
        cout << 0 << "\n";
        return;
    }
    int c = (y - x);
     ll ans = 0;
     if( 2*x >= y)
     {
         ans = (k)*(y-x);
         if(2*x == y)
         {
             ans -= c;
         }
     }
     else
     {
         while(x <= c && k > 0)
         {
             ans+=(y%x);
             y++; x++;
             k--;
         }
         if( k > 0)
         {
             ans += (k)*(c);

         }
     }

     cout << ans << "\n";
    
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
