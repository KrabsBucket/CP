#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n; cin >> n;
    vector<ll> dp(n+1, 1e9);
    ll test = n;
    dp[0] = 0;
    rep(i, 1, n+1)
    {   
        ll temp = i;
        
        while (temp > 0)
        {
            if (temp%10 >0)dp [i] = min(dp[i], 1+ dp[i - temp%10]);



            temp/=10;
        }

        
    }

    cout << dp[n] << "\n";
}

int main() {
    fastio;
        solve();
}