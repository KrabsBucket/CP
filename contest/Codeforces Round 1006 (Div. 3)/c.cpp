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
    int n, x;
    cin >> n >> x;

    vector<int> ans;
    ll r = 0;

    for (int i = 0; i < n; i++) {
        if ((i & x) == i) {
            ans.push_back(i);
            r |= i;
        } else {
            break;
        }
    }

    if (r != x) {
        if ((int)ans.size() == n) {
            ans.back() = x;
        } else {
            ans.push_back(x);
        }
    }

    while ((int)ans.size() < n) {
        ans.push_back(0);
    }

    for (int a : ans) {
        cout << a << " ";
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

    while (t--) {
        solve();
    }

    return 0;
}
