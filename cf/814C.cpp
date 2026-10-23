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
   int q; cin >> q;
   int ans[26][n+1];
   for(int i = 0; i< 26; i++)
   {
       for(int j = 0; j < n+1; j++)
       {
           ans[i][j] = 0;
       }
   }


   for(int k = 0; k < 26; k++)
   {
       for(int i = 0; i < n; i++)
       {
           int cost = 0;
           for(int j = i; j < n;j++)
           {
               if(s[j]-97 != k)cost++;
               ans[k][cost] = max(ans[k][cost], j-i+1);
           }

       }
   }
   for(int i = 0; i < 26; i++)
   {
       for(int j = 1; j <= n; j++)
       {
           ans[i][j] = max(ans[i][j], ans[i][j-1]);
       }
   }

   for(int i = 0; i < q; i++)
   {
       int x; char c; cin >> x >> c;
       cout << ans[c-97][x] << "\n";
   }



}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
