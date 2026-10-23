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
    int n, k; cin >> n >> k;
    int dp[2005][2005] ={0};

    for(int j = 1; j<= n; j++)
    {
        dp[1][j] = 1;
    }

    for(int i = 1 ;i < k; i++)
    {
        for(int j = 1; j<= n; j++)
        {
            for(int m = j ; m <= n; m+=j)
            {
                dp[i+1][m] = (dp[i+1][m] + dp[i][j])%MOD;
            }
        }

    }
    
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += dp[k][i];
        ans%= MOD;
    }
    cout << ans << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
