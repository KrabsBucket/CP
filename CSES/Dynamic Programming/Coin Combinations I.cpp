#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';
constexpr ll MOD = 1e9 + 7;


void solve() {
    
    ll n , x; cin >> n >> x;

    vector<ll> coins(n);
    rep(i, 0, n)
    {
        cin >> coins[i];
    }
    
    vector<ll> dp(x+1, 0);
    dp[0] = 1;
    rep(i, 1 ,x+1)
    {
        rep(j, 0 , n)
        {
            if (i - coins[j] >= 0)
            {
                dp [i] += dp[i- coins[j]];
                dp[i] %= MOD;
            }
            
        }
    }

    cout << dp[x] << "\n";






}

int main() {
    fastio;
        solve();
}