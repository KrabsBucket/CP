#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    ll pair =0;
    rep(i, 0, n)
    {
        int val;
        cin >> val;
        int diff = val - (i+1);

        pair += mp[diff];
        mp[diff]++;

    }

    cout << pair << "\n";






}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
