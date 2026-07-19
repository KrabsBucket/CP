#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n, q; cin >> n >> q;
    vector<ll> vec = {0};
    rep(i, 1, n+1)
    {
        ll x; cin >> x;
        vec.push_back(vec[i-1] + x);
    }

    rep(i, 0, q)
    {
        int x,y;
        cin >> x >> y;
        cout << vec[y] - vec[x] << "\n";
    } 
 }

int main() {
    fastio;

    solve();

    return 0;
}
