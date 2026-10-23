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

    int n, m; cin >> n >> m;
    vector<int> frnd(n);
    vector<int> prices(m);
    for(auto &x : frnd)
    {
        cin >> x;
        x--;
    }
    for(auto &x :prices)
    {
        cin >> x;
    }
    sort(frnd.rbegin(), frnd.rend());
    ll cost = 0;
    int i = 0;
    for(int j = 0; j < n ; j++)
    {
        if (i < m)
        {
            cost += min(prices[i], prices[frnd[j]] );
            i++;
        }
        else
        {
            cost += prices[frnd[j]]; 
        }
        
    }
    cout << cost << "\n"; 


     


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t ;cin >> t; 
    while(t--) {
        solve();
    }

    return 0;
}
