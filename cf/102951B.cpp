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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &x:a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= x)
        {
            x-= a[i];
        }
        else
        {
            cout << i<< "\n";
            return;
        }
    }
    cout << n << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
