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
   int n, k; cin >> n >> k;
   vector<ll> arr(n);
   vector<int> bit(31);
   for(auto &x:arr)
   {
       cin >> x;


   }
   
   for(int i = 0; i < n; i++)
   {
       int s = 0;
       int x = 1;
       while (s < 31)
       {

           if(x & arr[i])
           {
               bit[s]++;
           }

           x = x<<1;
           s++;


       }

   }

   ll ans = 0;
   for(int i = 30; i >= 0; i--)
   {
       if(k + bit[i] >= n)
       {
            k -= (n- bit[i]);
            ans += (1<<i);
       }
   }
   cout << ans << "\n";


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
