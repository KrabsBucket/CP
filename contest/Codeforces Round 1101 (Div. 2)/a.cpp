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
   vector<int> a (n);
   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   sort(a.begin(), a.end());
   int c1 = 0;
   int c2 = 0;
   for(int i = 0; i< n; i++)
   {
       if(i < n/2 && a[i] != a[n/2])
       {
           c1++;
       }
       else if(i > n/2 && a[i] != a[n/2])
       {
           c2++;
       }
   }
   cout << max(c1, c2)  << "\n";



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
