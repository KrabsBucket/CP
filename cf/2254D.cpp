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
   int n ; cin >> n;
   vector<ll> arr(n);
   map<ll, ll> mp;
   map<ll, ll> ans;
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
       mp[arr[i]]++;
   }

   ll c = 0;
   ll k = 0;
   ll s = 0;
   ll r =0;
   ll p = 0;
   for(auto [key, val] : mp)
   {
       if(key == 0)
       {
            k = 0;
            c = val;
            s += (c)*(k);
            continue;
       }
       if(c == 0  || (key - s) % c != 0)
       {
           cout << -1 << "\n";
           return;
       }
       ans[k] = ((key-s)/c);
       if(ans[k] <= p)
       {
           cout << -1 << "\n";
           return;
       }
       p = ans[k];
       s += (c)*(ans[k]);
       c = val;
       r = ans[k];
       k = key;
   }

   ans[k] = r+1;
   for(int i = 0; i< n; i++)
   {
       cout << ans[arr[i]] << " ";
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
