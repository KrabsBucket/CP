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
   int n, a, b, s;
   cin >> n;
   s = 0;
   a = INT_MAX;
   b = INT_MAX;
   for(int i = 0; i < n; i++)
   {
       int x;
       cin >> x;
       if(a>b)
       {
           swap(a,b);
       }
       if( a >= x)
       {
           a = x;
       }
       else if(b >= x)
       {
           b = x;
       }
       else
       {
           a = x;
           s++;
       }
   }

   cout << s << "\n";
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
