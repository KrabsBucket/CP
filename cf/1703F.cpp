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
   vector<int> a(n+1), pref(n+1, 0);
   for(int i = 1; i <=n ; i++)
   {
       cin >> a[i];
       pref[i] = pref[i-1];
       if(a[i] < i)
       {
           pref[i]++;
       }
   }

   ll c =0;
   for(int j = 1; j <=n; j++)
   {
       if(a[j] < j)
       {
           int idx = a[j] -1;
           if(idx > 0)
           {
               idx = min(idx, n);
               c+= pref[idx];
           }
       }
   }

   cout << c << "\n" ;
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
