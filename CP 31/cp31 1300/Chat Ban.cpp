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
   ll k; ll x ; cin >> k >> x;
   if (k*k <= x)
   {
       cout << 2*k -1 << "\n";
       return;
   }
   ll ans = 0;
   if (x <= ((k)*(k+1))/2)
   {
       ll lo = 1;
       ll hi = k;
       while(lo <= hi)
       {
           ll m = lo + (hi-lo)/2;
           ll r = ((m)*(m+1))/2;
           if (x == r)
           {
               cout << m << "\n";
               return;
           }
           else if (r < x)
           {
               lo = m +1;
           }
           else
           {
               hi = m-1;
               ans = m;

           }
       }
       cout << ans << "\n";

   }
   else
   {
       x -= ((k)*(k+1))/2;
       ll lo = 1;
       ll hi = k-1;
       while(lo <= hi)
       {
           ll m = lo + (hi - lo)/2;
           ll r = ((2*k - (m +1))*m)/2;
           if (x == r)
           {
               cout << m + k << "\n";
               return;
           }
           else if(r < x)
           {
               lo = m + 1;
           }
           else
           {
               hi = m -1;
               ans = m+k;
           }
       }
       cout << ans << "\n";


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
