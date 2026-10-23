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
   int c1 = 0, c2 = 0;
   int c = 0;
   for(int i = 0; i < n; i++)
   {
       int x; cin >> x;
       if(x == 0)
       {
           c++;
           if(i == 0)
           {
               c1 = 1;
           }
           if(i == n-1)
           {
               c2 = 1;
           }
       }

   }
   int sol = 0;
   if(c1 == 0 )
   {
       sol++;
   }
    if(c2 == 0)
   {
       sol++;
   }
   if(c < 2)
   {
       sol = -1;
   }
   cout << sol << "\n";

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
