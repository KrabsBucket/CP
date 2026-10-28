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

   ll lo = 0;
   ll hi = INF;
   ll ans = -1;
   ll target = (n*n + 1)/2;
   while(lo <= hi)
   {
       ll X = lo + (hi - lo)/2;

       ll count = 0;
       for(int i = 1; i<= n; i++)
       {
           count += min((ll)n,X/i);
       }

       if(count >= target)
       {
           ans = X;
           hi = X-1;
       }
       else
       {
           lo = X+1;
       }
   }
   cout << ans << "\n";
}

int main() {
    fastio;


    solve();

    return 0;
}
