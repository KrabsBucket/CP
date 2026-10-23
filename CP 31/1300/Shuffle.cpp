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
    
    ll n,x,m ;cin >> n >> x >> m;
    ll c = x;
    ll d = x;
    for(int i = 0; i < m; i++)
    {
        ll a, b; cin >> a >> b;
        if (c <= b)
        {
            c = min(a, c);
        }
        if (d >= a)
        {
            d = max(b,d);
        }
    }
    cout << d - c + 1 << "\n";

    
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
