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

vector<int> pf(ll n)
{
    vector<int> fac;

       if(n%2 == 0)
       {
           fac.push_back(2);
           while(n%2 == 0)
           {
               n/=2;
           }
       }
       for(int i = 3; i*i <= n; i+=2)
       {
           if(n%i == 0)
           {
               fac.push_back(i);
               while(n%i == 0)
               {
                   n/=i;
               }
           }
       }

       if(n > 2)
       {
           fac.push_back(n);
       }

       return fac;
}

void solve() {
   int n, k; cin >> n >> k;
   vector<int> arr(n+1);
   for(int i = 0; i < n; i++)
   {
       int x; cin >> x;
       arr[x]++;

   }

   ll cnt = 0;
   vector<ll> dp(n+1, 0);
   for(int i = k+1; i <= n; i++)
   {
       dp[i] = INF;
       vector<int> p = pf(i);
       for(auto u : p)
       {
           dp[i] = min(dp[i], 1+u*dp[i/u]);
       }
       cnt += (dp[i] * arr[i]);
   }
       
   cout << cnt << "\n";





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
