#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 998244353;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   string s; cin >> s;
   int c = 0;
   ll ways = 1;
   ll curr = 1;
   for(int i = 0; i < s.size()-1; i++)
   {
      if(s[i] == s[i+1]) 
      {
          c++;
          curr++;
      }
      else
      {

          ways = (ways*curr)%MOD;
          curr = 1;
      }
   } 

   ways = (ways*curr)%MOD;
   for(int i = 1; i<= c;i++)
   {
       ways*=i;
       ways%= MOD;
   }

   cout << c << " "<< ways << "\n";

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
