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
   int n; cin >> n;

   vector<ll> arr(n+1);
   vector<ll> odd (n+1, 0);
   vector<ll> even (n+1, 0);
   map<ll, ll> mp;
   mp[0]++;
   for(int i=1; i <= n; i++)
   {
       cin >> arr[i];
   }

   for(int i = 1; i <= n; i++)
   {
       odd[i] += odd[i-1];
       even[i] += even[i-1];
       int x = arr[i];
       if (i%2)
       {
           odd[i] += x;

       }
       else{
           even[i] += x;
       }

       if (mp[odd[i] - even[i]] > 0)
       {
           cout << "YES\n";
           return;
         }
       else
       {
           mp[odd[i] - even[i]]++;
       }

   }



   cout << "NO\n";
  



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
