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
  int n = s.size() ;
  bool one = 0;
  bool ze = 0;
  for(int i = 0; i < n; i++)
  {
      if (s[i]=='0' && !ze)
      {
          ze = 1;
          continue;
      }
      if (s[i]=='1' && !one)
      {
          one = 1;
          continue;
      }
      cout << s[i];
  }
  cout << "\n" ;
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
