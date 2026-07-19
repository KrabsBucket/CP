#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';
constexpr ll MOD = 1e9 + 7;


void solve() {
    ll n, x; cin >> n >>x;
    vector<ll> coins(n);
    rep(i, 0 , n)
    {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    vector<ll> dp(x+1);

    dp[0] =1;

    rep(i, 0, n)
    {
        rep(j, 1, x+1)
        {
            if(j >= coins[i])
            {
                dp[j] += dp[j - coins[i]];
                dp[j ]%= MOD;
            }
        }
    }

    cout << dp[x] << "\n";


}

int main() {
    fastio;
        solve();
}