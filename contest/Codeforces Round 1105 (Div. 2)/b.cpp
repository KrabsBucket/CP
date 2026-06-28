#include <bits/stdc++.h>
#include <iostream>

using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';


void solve() {
    ll n,m,r,c; cin >> n >> m >> r >> c;
    ll MOD = 998244353;
    if (r ==1 && c==1)
    {
        cout << 1 << "\n";
        return;
    }
    if(r==1)
    {
        ll ans = pow(2,n);
        ans%= MOD;
        cout << ans << "\n";
        return;
    }

    if(c==1)
    {
        ll ans = pow(2,m);
        ans%= MOD;
        cout << ans << "\n";
        return;
    }

    if (r%2 == 0 || c%2 == 0)
    {
        ll s = r*c;
        s%=MOD;
        s = pow(s, 2);
        s%= MOD;
        s*=(n-r +1);
        s%=MOD;
        s*=(m - c +1);
        s%= MOD;
        cout << s << "\n";

    
    }
    else
    {
        cout << 2 << "\n";
    }



    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
