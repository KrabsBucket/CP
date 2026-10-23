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
    int n,m;cin>> n>>m;
    vector<int> a(n);
    vector<int> b(m);
    ll bea = 0, ver = 0;
    for(int i =0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[n-i-1] = x;
    }
    for(int i =0; i < m; i++)
    {
        ll x;
        cin >> x;
        b[m-i-1] = x;
    }
    bea = a[0];
    ver = b[0];
    for(int i =1; i < n; i++)
    {
        bea += (a[i] - a[i-1] + 1);
    }
    for(int i = 1; i < m; i++)
    {
        ver += (b[i] - b[i-1] + 1);
    }

    cout << (bea >= ver ? 1 : 2) << "\n";
    
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
