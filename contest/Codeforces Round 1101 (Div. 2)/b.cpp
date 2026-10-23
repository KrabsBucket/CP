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
    
    int n; cin >> n;
    ll s = 0;
    ll m = 2e18;
    for(int i = 0; i < n ; i++)
    {
        ll x; cin >> x;
        s += x;
        ll mh = s/(i+1);
        m = min(mh, m);
        cout << m << " ";


    }
    cout << "\n";

    
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
