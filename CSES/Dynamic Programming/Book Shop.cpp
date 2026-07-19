#include <bits/stdc++.h>
#include <iostream>

using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n, x; cin >> n >> x;
    vector<ll> prices(n);
    vector<ll> pages(n);
    vector<ll> dp(x+1);
   

    rep(i, 0 , n)
    {
        cin >> prices[i];
    }

    
    rep(i, 0 , n)
    {
        cin >> pages[i];
    }

    rep(i, 0 , n)
    {
        for (int j = x; j >= prices[i]; j--)
        {   
            dp[j] = max(dp[j], pages[i] + dp[j - prices[i]]);
        }
    }

    cout << dp[x] << "\n";
}
 

int main() {
    fastio;
        solve();
}
