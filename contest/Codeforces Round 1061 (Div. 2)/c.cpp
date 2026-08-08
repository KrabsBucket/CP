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
   vector<int> arr(n+1, 0);
   for(int i = 0; i < n; i++)
   {
       int x; cin >> x;
       arr[x] += 1;
    }

   vector<int> pref(n+1, 0);
   for(int i = 1; i <= n; i++)
   {
       pref[i ] = pref[i-1] + arr[i];

   }
   

   for(int d = n; d >=1; d--)
   {
       int inv = pref[min(n, 4*d -1)];


       inv -= arr[d];
       if (2*d <= n)inv -= arr[2*d];
       if(3*d <= n) inv -= arr[3*d];

       if (inv <=k)
       {
           cout << d << "\n";
           return;
       }

   }













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
