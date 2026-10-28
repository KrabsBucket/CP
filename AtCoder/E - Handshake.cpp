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
   ll n, m; cin >> n >> m;
   vector<int> a(n), sf(n+1); 
   for(auto &x : a)
   {
       cin >> x;
   }
   sort(a.begin(), a.end());
   for(int i = n-1; i >= 0; i--)
   {
       sf[i] = (a[i] + sf[i+1]);
   }
   
   ll lo = 0;
   ll hi = 2e5;
   ll ans = -1;
   while(lo <= hi)
   {
       ll X = (hi + lo)/2;
       ll cnt = 0;
       
       for(int i = 0 ; i < n; i++)
       {
           auto it = lower_bound(a.begin(), a.end(), (X - a[i]));
           int idx = it - a.begin();
           cnt += (n - idx);
       }
       if(cnt >= m)
       {
           ans = X;
           lo = X +1;
       }
       else
       {
           hi = X - 1;
       }
   }

   ll cnt = 0;
   ll hpy = 0;

   for(int i = 0 ; i < n; i++)
   {
       ll c = 0;
       auto it = upper_bound(a.begin(), a.end(), ans - a[i]);
       int idx = it - a.begin();
       c = n-idx;
       hpy += (a[i]*c + sf[idx]);
       cnt += c;
   }

   hpy += (m - cnt)*ans;
   cout << hpy << "\n";








}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
