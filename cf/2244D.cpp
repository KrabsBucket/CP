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
    int n, m; cin>> n >> m;
    vector<ll> b(m);
    vector<ll> pref(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> pref[i];
        pref[i] += pref[i-1];
    }
    for(auto &x : b)
    {
        cin >> x;
    }
    sort(b.rbegin(), b.rend());
    ll s = (pref[n] - pref[b[0]]);
    for(int i = 1; i< m;i++)
    {
        ll p = pref[b[i-1]] - pref[b[i]];
        s += (max(p, (-p)));
    }
    s += (max(pref[b[m-1]], -pref[b[m-1]]));
    cout << s << "\n";

    
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
