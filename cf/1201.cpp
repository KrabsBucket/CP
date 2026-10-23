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
   for (auto &x : arr)
   {
       cin >> x;
   }
   sort(arr.begin(), arr.end());
   int mid = (n-1)/2;
   ll lo = 0;
   ll hi = 2e9;
   ll ans = -1;
   while(lo <= hi)
   {
       ll m = lo + (hi - lo)/2;

       ll s = 0;
       for(int i = mid; i < n ; i++)
       {
           s += (max(0LL, m-arr[i]));
       } 
       if(s <= k)
       {
           ans = m;
           lo = m + 1;
       }
       else
       {
           hi = m-1;
       }

   }
   cout << ans << "\n";

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
