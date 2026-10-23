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
   ll n, h; cin >> n >> h;
   vector<int> vec(n);
   for(int i = 0; i < n; i++)
   {
       cin >> vec[i];
   }
   int lo = 1;
   int hi = n;
   int ans = -1;

   while(lo <= hi)
   {
       ll th = h;
       int mid = (lo + hi)/2;
        vector<int> arr(mid);
       for(int i = 0; i < mid ; i++)
       {
           arr[i] = vec[i];
       }
       sort(arr.rbegin(), arr.rend());
       for(int i = 0 ; i< mid ; i+=2)
       {
           th-=arr[i];
       }
       if (th < 0)
       {
           hi = mid -1;
       }
       else if(th >= 0)
       {
           lo = mid +1;
           ans = mid;
       }

           
   }
   cout << ans << "\n";
       
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
