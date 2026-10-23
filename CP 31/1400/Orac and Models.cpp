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
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> lon(n+1, 1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 2*i; j <= n; j+=i)
        {
            if(arr[j] > arr[i])
            {
                lon[j] = max(lon[j], lon[i]+1);
            }
        }
    }

    ll ans = INT_MIN;
    for(int i = 1;i <= n; i++)
    {
        ans = max(ans, (ll)lon[i]);
    }
    cout << ans << "\n";

     
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
