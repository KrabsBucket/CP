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
   int p, q;cin >> p >> q;
   ll k = 2*p + 4*q + 1;
   ll n = -1, m= -1;
   for(int i = 2; i*i <= k; i++)
   {
       if(k%i == 0)
       {
           int x = (k/i);
           int y = (i);
           x-=1;
           y-=1;
           if(x%2 == 0 && y%2== 0)
           {
                ll l = x/2;
                ll r = y/2;
               if(l*(r+1) >= q && r*(l+1)>=q)
               {
                   n = l;
                   m = r;
               }



           }

       }
   }
   if(m == -1)
   {
       cout << -1 << "\n";
   }
   else
   {
       cout << n << " " << m << "\n";
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
