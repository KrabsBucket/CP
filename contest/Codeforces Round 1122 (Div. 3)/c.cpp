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
   string s; cin >> s;
   vector<int> pf(n+2),sf(n+2);
   for(int i = 1; i <= n; i++)
   {
       pf[i] = (s[i-1]-48);
       pf[i] += pf[i-1];
   }
   for(int i = n; i>0 ; i--)
   {
       sf[i] = (s[i-1] - 48);
       sf[i] += sf[i+1];
   }
   
   int cost = INT_MAX;
   int x ;
   int leadZero = 0;
    while (leadZero < n && s[leadZero] == '0')
        leadZero++;



    int L = (s[0] == '0' ? leadZero : 0);
    int R = (s[0] == '0' ? n : 0);
  for(int i = L; i <= R; i++)
   {
       x = (pf[i] + (n-i- sf[i+1]));
       cost = min(x, cost);
   }
   
   cout << cost << "\n";

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
