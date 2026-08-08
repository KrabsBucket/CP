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
   int n, k, m; cin >> n >> k >> m;
   if(k > m)
   {
       cout << "NO\n";
       return;
   }

   cout << "YES\n";
   for(int i = 1; i <= n; i++)
   {
       if(i % (k) == 0)
       {
           cout << (m - k +1) << " ";

       }
       else
       {
           cout << 1 << " ";
       }

   }

    cout << "\n";


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
