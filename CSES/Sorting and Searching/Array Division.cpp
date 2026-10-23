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
    vector<ll> a(n);
    for(auto &x : a)
    {
        cin >>x;
    }
    ll lo = 0;
    ll hi = INF;
    ll ans = -1;
    while(lo <= hi)
    {
        ll m = lo + (hi - lo)/2;
        int j = 0;
        for(int i = 0;i < k; i++)
        {

            ll x = 0;
            while(j < n && x + a[j] <= m)
            {
                x += a[j];
                j++;
            }
            
        }
        if(j == n)
        {
            ans = m;
            hi = m-1;
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

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
