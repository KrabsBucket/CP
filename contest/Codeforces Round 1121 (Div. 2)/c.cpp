#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 998244353;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)
ll binpow(ll a , ll b, ll mod)
{
    ll res = 1;
    while(b > 0)
    {
        if(b&1)
        {
            res = (res*a)%mod;
        }

        a = (a *a)%mod;
        b>>=1;

    }

    return res;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr)
    {
        cin >> x;
    }
    sort(arr.rbegin(), arr.rend());
    ll val = 1;
    for(int i = 2; i < n; i++)
    {
        val = (val * i)%MOD;
    }
    ll c1 = 0;
    for(int i = 1; i < n; i++)
    {
        c1 = (c1 + (binpow(i, MOD-2, MOD)))%MOD;
    }
    ll sol = ((arr[0]%MOD *val%MOD)%MOD *c1%MOD)%MOD;
    if(n == 1)
    {
        cout << sol << "\n";
        return;
    }
    ll p = (c1 - 2+ MOD)%MOD;
    sol = (sol +  ((arr[1]%MOD*(val)%MOD)%MOD * p%MOD)%MOD)%MOD;
    for(int i = 3; i <= n; i++)
    {
        ll x = (p - ((binpow(i-1, MOD-2, MOD) + MOD)%MOD)+ MOD)%MOD;
        sol = (sol + (((arr[i-1]%MOD*(val)%MOD)%MOD *(x)%MOD))%MOD)%MOD;
        p = x;
    }
    cout << sol << "\n";

 
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
