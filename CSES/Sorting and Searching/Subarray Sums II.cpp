#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, x; cin >> n >>x;
    map<ll, int> mp;
    mp[0] =1;
    ll p = 0;
    ll c = 0;
    rep(i, 0, n)
    {
        int t; cin >> t;
        p+=t;

        c += mp[p - x];
        mp[p]++;

    }
    cout << c << "\n";
    

}

int main() {
    fastio;

        solve();

    return 0;
}
