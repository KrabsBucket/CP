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
   int n ; cin >> n;
   if ( n < 7)
   {
       cout << "NO\n";
       return;
   }

   for(int k = 2; k <= 1000; k++ )
   {
       ll q = k + 1;
       ll p = k*k;
       while( q + p <= n)
       {
           q+= p;
           if (q == n)
           {
               cout << "YES\n";
               return;
           }

           p*=k;
       }


   }

   cout << "NO\n";
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
