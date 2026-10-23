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
   int n, m; cin >> n >> m;
   vector<int> arr(n);
   for(int i = 0; i < m;i++)
   {
       int x; cin >> x;
       x--;
       arr[x]++;
   }
   int lo = 1;
   int hi = 2*m;
   int ans = -1;
   while(lo <= hi)
   {
       int m = (lo+hi)/2;

       ll task = 0;
        ll free = 0;
       for(int i = 0; i < n; i++)
       {
           if(arr[i] > m)
            {
                task += arr[i] - m;
            }
           else
           {
               free += (m - arr[i])/2;
           }
               
       }
       if(free >= task)
       {
            ans = m;
            hi = m -1;
       }
       else
       {
           lo = m+1;
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
