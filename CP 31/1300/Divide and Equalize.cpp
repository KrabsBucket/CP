#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
  int n;cin >> n;
  vector<int> arr(n);
  map<int, int> mp;
  for(auto &x: arr)
  {
      cin >> x;
      int m = x;
      if (x > 1)
      {
          while (m%2 == 0)
          {
              m/=2;
              mp[2]++;
          }

          for(int i = 3; i*i <= m; i+=2)
          {
              while(m%i == 0)
              {
                  m/=i;
                  mp[i]++;
              }
          }
          
          if(m > 2)
          {
              mp[m]++;
          }
      }
  }

  for(auto const&[prime, nums] : mp)
  {
      if (nums%n != 0)
      {
          cout << "NO\n";
          return;
      }

  }

  cout << "YES\n";





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
