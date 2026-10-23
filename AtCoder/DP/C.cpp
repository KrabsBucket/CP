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
    vector<int> a(n),b(n),c(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b [i] >> c[i];
    }
    vector<int> ap(n), bp(n), cp(n);
    ap[0] = a[0];
    bp[0] = b[0];
    cp[0] = c[0];

    for(int i = 1; i < n; i++)
    {
        ap[i] = max({ap[i-1], bp[i-1]+a[i], cp[i-1]+a[i]});
        bp[i] = max({ap[i-1]+b[i], bp[i-1], cp[i-1]+b[i]});
        cp[i] = max({ap[i-1]+c[i], bp[i-1]+c[i], cp[i-1]});
    }
    cout << max({ap[n-1], bp[n-1], cp[n-1]}) << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
