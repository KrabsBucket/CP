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
    int n , k ; cin >> n >> k;
    ll s = 0;
    vector<ll> pref(n+1, 0);
    for(int i = 1; i <= n ; i++)
    {
        cin >> pref[i];
        pref[i] += pref[i-1];
    }
    for(int i = k; i <= n; i++)
    {
        s+= (pref[i] - pref[i-k]);
    }
    cout << fixed << setprecision(10) << (double)(s)/(n-k+1) << "\n";


    

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
