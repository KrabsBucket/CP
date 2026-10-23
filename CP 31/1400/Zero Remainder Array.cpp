#include <bits/stdc++.h>
#include <map>
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
    ll n,k; cin >> n >> k;
    map<int,ll> mp;
    for(int i =0; i < n; i++)
    {
        int x; cin >> x;
        int r = (k - (x%k))%k;
        mp[r]++;
    }
    ll ans = 0;
    for( auto [r, c] : mp)
    {
        if(r != 0)
        {
        ll s = r + (c-1)*k + 1;
        ans = max(s, ans);

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
