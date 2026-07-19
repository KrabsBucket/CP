#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    constexpr int MOD = 1e+7;

    int n; cin >> n;


    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(6, i); j++)
        {
            dp[i] += (dp[i-j])%MOD;
        }

    }
 
    cout << dp [n] << "\n"; 
}

int main() {
    fastio;

    // int t = 1;
    // cin >> t;
    // while(t--) {

    solve();

    // }

    return 0;
}
