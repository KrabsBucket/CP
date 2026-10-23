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
    int n,m; cin >> n >> m;
    vector<ll> a(m),b(m);
    for(int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll lo = 1;
    ll hi = INF;
    ll ans = -1;
    while(lo <= hi)
    {
        ll d = lo + (hi-lo)/2;
        ll p = a[0];
        bool flg = true;
        for(int i = 1; i < n; i++)
        {
            auto it = lower_bound(b.begin(), b.end(), p+d);
            if(it == b.end())
            {
                flg = false;
                break;
            }
            int idx = it - b.begin();
            if(a[idx] > p+d)
            {
                p = a[idx];
            }
            else
            {
                p = p+d;
            }
        }
        if(flg)
        {
            ans = d;
            lo = d+1;
        }
        else
        {
            hi = d-1;
        }
    }
    cout << ans << "\n";
        
    

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    freopen("socdist.in", "r", stdin);
     freopen("socdist.out", "w", stdout);

    solve();

    return 0;
}
