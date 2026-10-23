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
    vector<ll> f(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin>> f[i];
    }

    ll s = (f[1] + f[n])/(n-1);
    ll y = 0;
    vector<int> ans(n+1);
    for(int i = 1; i < n; i++)
    {
       ll k =  (s - (f[i] - f[i+1]))/2;
       k -= y;
       ans[i] = k;
       y += k;
    }
    ans[n] = (s - y);
    for(int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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
