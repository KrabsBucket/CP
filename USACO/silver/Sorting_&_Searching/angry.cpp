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
   vector<int> arr(n);
   for(auto &x : arr)
   {
       cin >>x;
   }
   sort(arr.begin(), arr.end());

   ll lo = 0;
   ll hi = INF;
   ll ans = -1;
   while(lo <= hi)
   {
       ll r = lo + (hi-lo)/2;
       int j = 0;
       for(int i = 0; i < k; i++)
       {
           if(j == n)
           {
               break;
           }
           int st = arr[j];
           while(j < n && arr[j] <= st + 2*r )
           {
               j++;
           }
       }
       if(j == n)
       {
           ans = r;
           hi = r-1;
       }
       else
       {
           lo = r+1;
       }
   }
   cout << ans << "\n";


}


int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("angry.in", "r", stdin);
     freopen("angry.out", "w", stdout);

    solve();

    return 0;
}
