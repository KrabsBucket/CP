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
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first; a[i].second = i;
    }
    sort(a.begin(), a.end());
    
    ll D = 0;
    for(int i = 0; i < n; i++)
    {
        ll d = max(0, a[i].second - i);
        D = max(d, D);
    }
    cout << D + 1 << "\n";
        
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("sort.in", "r", stdin);
     freopen("sort.out", "w", stdout);

    solve();

    return 0;
}
