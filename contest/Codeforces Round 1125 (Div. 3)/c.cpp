#include <bits/stdc++.h>
#include <iostream>
#include <map>
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
    vector<int> a(n+1);
    map<int, ll> mp;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v(n+1);
    for(int i = 1; i+4<=n; i++)
    {
        v[i] = a[i] + a[i+2] - a[i+4];
        mp[v[i]]++;
        
    }
    ll ans = 0;
    for(auto[key,val] : mp)
    {
        ans += ((val)*(val-1))/2;
    }
    for(int i = 1; i <= n-6; i++)
    {
        if(v[i] == v[i+2]) ans--;
    }
    for(int i = 1; i <= n-8; i++)
    {
        if(v[i] == v[i+4]) ans--;
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
