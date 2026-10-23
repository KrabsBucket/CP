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
    ll n , t; cin >> n >> t;
    vector<ll> a(n);
    for(auto &x : a)
    {
        cin >> x;
    }
    ll lo = 0;
    ll hi = INF;
    ll ans = -1;

    while(lo <= hi)
    {
        ll tt = lo + (hi - lo)/2;
        ll x = 0;
        for(int i = 0; i < n ; i++)
        {
            x += (tt/a[i]);
            if(x >= t) break;
        }
        if(x >= t)
        {
            ans = tt;
            hi = tt -1;
        }
        else
        {
            lo = tt+1;
        }
    }
    cout << ans << "\n";

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
