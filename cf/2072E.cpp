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
   int k; cin >> k;
   array<int, 501> arr;
   for(int i = 1; i <= 500; i++)
   {
       arr[i] = ((i)*(i-1))/2;
   }
   array<int, 501> ans;
   int n = 0;
   int c = 0;
   while(k > 0)
   {
       auto it = upper_bound(arr.begin(), arr.end(), k);
       it--;
       int idx = it - arr.begin();
       k -= arr[idx];
       ans[n] = idx;
       c+=idx;
       n++;
   }
   int y = 0;
   cout << c << "\n";
   for(int i = 0; i < n; i++)
   {
       int k = ans[i];
       for(int j = 0; j < k ; j++)
       {
           cout << i << " " << y << "\n";
           y++;
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
