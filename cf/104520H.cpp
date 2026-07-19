#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n;cin >> n; 
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }
    
    rep(i, 0, n)
    {
        c[i] = a[i]*(1LL)*(i+1)*(n-i);
    }

    sort(c.begin(), c.end());
    sort(b.rbegin(), b.rend());

    ll s =0;
    rep(i, 0, n)
    {
        s+=b[i]*c[i];
    }
    cout << s << "\n";


}

int main() {
    fastio;


        solve();

    return 0;
}
