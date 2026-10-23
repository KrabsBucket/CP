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
    ll n, k, m; cin >> n >> k >> m;
    ll lo = 1;
    ll hi = (n/m);

    ll ans = -1;
    while(lo <= hi)
    {
        ll x = (lo + (hi-lo)/2);

        ll day = k;
        ll g = 0;
        while(day > 0 && g < n)
        {
            ll y = (n-g)/x;
            if(y <= m)
            {
                g += day*m;
                break;
            }
            else
            {
                ll d = ((n-g) -x*y)/y + 1;
                d = min(d, day);
                g += d*y;
                day -= d;

            }
        }
        if(g >= n)
        {
            ans = x;
            lo = x + 1;
        }
        else
        {
            hi = x-1;
        }
    }
    cout << ans << "\n";

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    freopen("loan.in", "r", stdin);
    freopen("loan.out", "w", stdout);

    solve();

    return 0;
}
