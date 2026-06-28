#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> coins(n);
    rep(i, 0 , n){
        cin >> coins[i];
    }

    vector<ll> dp(x+1, 1e9);
    dp[0] = 0;


    sort(coins.begin(), coins.end());

    rep (i, 1, x+1)
    {
        for (int coin: coins)
        {
            if ((i -coin) >= 0){
                dp[i] = min(dp[i], dp[i-coin] +1);

            }
        }
    }

    if (dp[x] > 1e8)
        dp[x] = -1;
        
    cout << dp[x] << "\n";



}

int main() {
    fastio;
        solve();
}