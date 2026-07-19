#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';
constexpr ll MOD = 1e9 +7;


void solve() {
    ll n; cin >> n;

    vector<vector<char>> maps(n, vector<char>(n));

    rep(i, 0 , n)
    {
        rep(j, 0 , n)
        {
            cin >> maps[i][j];
        }
    }
 
    vector<vector<int>> dp(n , vector<int>(n+1));
    dp[0][0] = 1;

    if (maps[0][0] == '*') 
             {   cout << 0 << "\n";
                return;}

    rep(i , 0, n)
    {
        rep(j,  0, n)
        {
            if (maps[i][j] == '.')
           { if (i > 0)
            {
                dp[i][j] += dp[i-1][j] ;
                dp[i][j]%=MOD;
            }

            if (j > 0)
            {
                dp[i][j] += dp[i][j-1];
                dp[i][j]%=MOD;
            }}
        }


    }
    cout << dp[n-1][n-1] << "\n";


}

int main() {
    fastio;
        solve();
}