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
    int n; cin >> n;
    vector<int> arr(n+1);
    vector<ll> ppre(n+1), pre(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pre[i] = pre[i-1];
        pre[i] += arr[i];

        ppre[i] = ppre[i-1];
        ppre[i] += pre[i];
    }
    
    vector<ll> siz(n+1);
    for(int i = 1 ; i <= n; i++)
    {   
        siz[i] = siz[i-1];
        siz[i] += n-i+1;
    }
    vector<ll> s(n+1);
    s[1] = ppre[n];
    for(int i = 2; i <= n; i++)
    {
         s[i] = s[i-1];
         s[i] -=(n-(i-2))*(arr[i-1]);
    }
    
    for(int i = 2; i <= n; i++)
    {
        s[i] += s[i-1];
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++)
    {
        ll l, r; cin >> l >> r;
        l--;
        auto gs = [&](ll x) {
            if( x == 0 ) return 0LL;
            auto it = upper_bound(siz.begin(), siz.end(), x);
            it--;
            int i = it - siz.begin();
            ll sm = s[i];
            ll idx = x - siz[i];
            sm+= ppre[i + idx ] - ppre[i] - idx*(pre[i]);
            return sm;
        };
        
        cout << gs(r) - gs(l) << "\n";
    }

    

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
