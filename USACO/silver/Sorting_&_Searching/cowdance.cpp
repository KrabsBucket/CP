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
    ll n, t; cin >> n >> t;
    vector<int> a(n);
    for(auto &x : a)
    {
        cin >> x;
    }
    ll lo = 1 ;
    ll hi = n;
    ll ans = 0;
    while(lo <= hi)
    {
        ll k = (hi+lo)/2;

        priority_queue<ll , vector<ll> , greater<ll>>pq;
        ll i = 0;
        while(i < k)
        {
            pq.push(a[i]);
            i++;
        }
        while(i < n)
        {
            ll x = pq.top();
            pq.pop();
            pq.push(x+ a[i]);
            i++;
        }
        ll tt = INT_MIN;
        while(!pq.empty())
        {
            ll x = pq.top();
            tt = max(tt, x);
            pq.pop();
        }

        if(tt <= t)
        {
            ans = k;
            hi = k - 1;
        }
        else
        {
            lo = k+1;
        }

    }
    cout << ans << "\n";

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("cowdance.in", "r", stdin);
     freopen("cowdance.out", "w", stdout);

    solve();

    return 0;
}
