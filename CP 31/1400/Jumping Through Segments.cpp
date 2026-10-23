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
    vector<pair<int,int>> a(n+1);
    a[0] = {0,0};
    for(int i = 1; i<= n;i++)
    {
        cin >> a[i].first >> a[i].second;

    }
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi)
    {
        int pos = 1;
        int k = (hi + lo)/2;
        int L = 0;
        int R = 0;

        for(int i = 1; i <= n; i++)
        {

             L = max(L -k , a[i].first) ;
             R = min(R + k , a[i].second);
            if(L > R)
            {
                pos = 0;
                break;
            }

        }
        if(pos)
        {
            ans = k;
            hi = k -1;
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

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
