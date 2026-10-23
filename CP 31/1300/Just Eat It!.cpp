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
    int n; cin >>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll pref = 0;
    ll suff = 0;
    for(int i = 0; i < n; i++)
    {
        pref += arr[i];
        suff += arr[n-i-1];
        if (pref<= 0 || suff<=0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
}

int main() {
    fastio;


    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
