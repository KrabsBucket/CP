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
    int odd = 0, div = 0, ndiv = 0;
    for(int i = 0;i < n; i++)
    {
        int x; cin >> x;
        if(x%2)
        {
            odd++;
        }
        else if(x%4 == 0)
        {
            div++;
        }
        else
        {
            ndiv++;
        }
    }
    cout << max({odd, div,ndiv}) << "\n"; 
    
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
