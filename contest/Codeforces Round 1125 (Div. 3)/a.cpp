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
    int x,y, r; cin >> x >> y >> r;
    for(int i = -100; i < 110; i++)
    {
        for(int j = -100; j <110; j++)
        {
            if((i-x)*(i-x) + (j-y)*(j-y) == r*r)
            {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }

    
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
