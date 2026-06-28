#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < b; ++i)


#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<pair<ll, ll>> entry;

    rep(i, 0 , n)
    {
        ll a, b;
        cin >> a >>b;
        entry.push_back({a,1});
        entry.push_back({b,-1});
    }


    sort(entry.begin(), entry.end());

    ll m = 0;
    ll t = 0;

    rep(i, 0 , 2*n)
    {
        
        t += entry[i].second;
        m = max(t, m);
    }


    cout << m << "\n";
}

int main() {
    fastio;
        solve();
    }


