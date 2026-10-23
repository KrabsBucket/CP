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
    int n,w;cin >> n >> w;
    vector<int> val(n), wgh(n);
    for(int i = 0; i< n; i++)
    {
        cin >> wgh[i] >> val[i];
    }
    vector<vector<ll>> dp(n+1, vector<ll> (w+1));
    for(int i = 1;  i<= n; i++)
    {
        for(int c = 0; c <= w; c++)
        {
            dp[i][c] = dp[i-1][c];
            if(c >= wgh[i-1])
            {
                dp[i][c] = max(dp[i-1][c] , dp[i-1][c-wgh[i-1]] + val[i-1]);
            }
        }
    }
    cout << dp[n][w] << "\n";




    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
