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
   string s; cin >> s;
   int n = s.size();
   int l = 0;
   int d = 0;
   for(int i = 2; i < n; i++)
   {
       if(s[i] == s[i-2])
       {
           if(s[i] == s[i-1])
           {
               l = 1;
           }
           else
           {
               d = 1;
           }
       }

   }
   cout << 1 + l + d << "\n";
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
