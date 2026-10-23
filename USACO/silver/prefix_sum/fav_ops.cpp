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
    ll n, m; cin >> n >> m;
    vector<ll> arr(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i]%= m;
    }
    sort(arr.begin(), arr.end());
    vector<ll> pref(n+1);
    for(int i = 1; i <= n; i++)
    {
        pref[i] = arr[i];
        pref[i] += pref[i-1];
    }
    ll tot = pref[n];
    ll ans = INF;
    for(int i = 0 ; i <=n-1 ;i++)
    {
        if(i + 1+ n/2 <= n)
        {
            ll x = arr[i+ 1 +n/2];
            ll left = pref[i+n/2] - pref[i];
            ll sol =  (n/2)*x - (left)  + (tot - left + i*m)- (n- n/2)*x; 
            ans = min(sol, ans);

        }
        else
        {
            ll x = arr[i + 1 - (n+1)/2] +m;
            int ele = (n - (i));
            ll left = pref[n] - pref[i] + pref[n/2- ele] + (n/2- ele)*m ;
            ll sol = (n/2)*x - left + tot-left + i*m  -(n - n/2)*x ; 
            ans = min(sol, ans);
                
        }

    }
    cout << ans << "\n";

    
}

int main() {
    fastio;


    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
