#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
     int n, k;
     cin >> n >> k;
     vector<ll> a(n);
     vector<ll> b(n-1);
     unordered_map<ll, int> mp;
     for(int i = 0; i < n; i++)
     {
         cin >> a[i];
         mp[a[i]] = 1;
     }

     if(k >= 3)
     {
         cout << 0 << "\n";
         return;
     }
     sort(a.begin(), a.end());
     ll ans = a[0];
     for(int i = 0; i < n-1; i++)
     {
         ans = min((a[i+1] - a[i]), ans);
     }
     if(k == 1)
     {
        cout << ans << "\n";
        return;
     }
     for(int i = 0; i < n ;i++)
     {
         for(int j = i+1; j < n; j++)
         {

             ll d = a[j] - a[i];
             ans = min(ans, d);
             auto it = lower_bound(a.begin(), a.end(),d);
             if(it != a.end())
             {
                 ans = min(ans, *it - d);
             }
             if(it != a.begin())
             {
                 ans = min(ans, d- *(it-1));
             }

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
