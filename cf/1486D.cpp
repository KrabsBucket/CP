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

bool check(ll x, int k, vector<int>& a)
{
    vector<int> tmp(a.size()+1, 0);
    for(int i = 0 ; i < a.size(); i++)
    {
        int val = (a[i] >= x ? 1 : -1);
        tmp[i+1] = tmp[i] + val;
    }
    ll pf = INF;

    for(int r = k; r <= a.size(); r++)
    {
        pf = min(pf, 1LL*tmp[r - k]);
        if(tmp[r] - pf > 0 ) return true;
    }
    return false;
}

void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   ll lo = INF;
   ll hi = -INF;
   for(auto &x : a)
   {
       cin >> x;
       lo = min(lo, 1LL*x);
       hi = max(hi, 1LL*x);
   }
   ll ans = -1;

   while(lo <= hi)
   {
       ll X = lo + (hi - lo)/2;
       if(check(X, k , a))
       {
            ans = X;
            lo = X+1;
       }
       else
       {
           hi = X-1;
       }


   }

   cout << ans << "\n";

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
