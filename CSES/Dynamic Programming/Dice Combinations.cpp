#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';




void solve() {

    const long long MOD = 1e9 + 7; 
    ll n; cin >> n;
   
    vector<ll> dp(7+ n);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;


    rep(i,7 , n+1)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4]+ dp[i-5]+ dp[i-6];
        dp[i] %= MOD;

    }

    cout << dp[n] << "\n";
}

int main() {
    fastio;
        solve();
}