#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';


void solve() {
    ll n, q; cin >> n; cin >> q;
    set<ll> s;
    unordered_map<ll, ll> mp;
    vector<ll> stair(n);
    vector<ll> que(q);
    vector<pair<ll, ll>> val;
    rep(i, 0 , n)
    {
        cin >> stair[i];
    }
    rep(i, 0, q)
    {
        cin >> que[i];
        s.insert(que[i]);

    }
    int k = 0;
    int t = 0;
    for(const auto& ele : s)
    {
        mp[ele] += t;
        while(k < n && ele >= stair[k])
        {
            mp[ele] += stair[k];
            k++;
        }
        t = mp[ele];
    }


    rep(i, 0 ,q)
    {
        cout << mp[que[i]] << " ";

    }
    cout << "\n";

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
