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
    int n, q; cin >> n >> q;
    vector<int> arr(n+1);
    for(int i =1; i <= n;i++)
    {
        cin >> arr[i];
    }
    vector<int> diff(n+2, 0);
    for(int i =0; i < q; i++)
    {
        int l,r; cin >> l >> r;
        diff[l]+=1;
        diff[r+1] -=1;

    }
    for(int i =1; i <= n; i++)
    {
        diff[i] += diff[i-1];
    }
    sort(diff.rbegin(),diff.rend());
    sort(arr.rbegin(), arr.rend());
    ll ans = 0;
    for(int i =0; i < n; i++)
    {
        ans +=(1LL)*(arr[i])*(diff[i]);
    }
    cout << ans << "\n";

    
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
