#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n; cin >> n;
    unordered_map <ll, ll> counts;
    vector<ll> stick(n);
    ll mode = -1;
    ll maxcunt = 0;
    rep(i, 0, n)
    {
        cin >> stick[i];
        counts[stick[i]]++;

        if (counts[stick[i]] > maxcunt)
        {
            maxcunt = counts[stick[i]];
            mode = stick[i];
        }

    
    }
    sort(stick.begin(), stick.end());
    
    ll cost2 = 0;
    ll cost1 = 0;
    rep(i, 0 , n)
    {
        cost1 += abs(stick[i] - mode);
        cost2 += abs(stick[i] - stick[n/2]);
    }

    cout << min(cost1, cost2)<< "\n";





}

int main() {
    fastio;
        solve();
}