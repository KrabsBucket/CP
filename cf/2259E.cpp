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
   vector<int> arr(n+1);
   for(int i = 1; i <= n; i++)
   {
       cin >> arr[i];
   }
   vector<int> pref(n+2, 1);
   for(int i = 1; i<= n; i++ )
   {
       if(arr[i] > 0)
       {
           pref[max(0, i- arr[i] +1)] += 1;
           pref[min(n, i + arr[i] -1) + 1] -= 1;

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
