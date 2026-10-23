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

    if (!(n%2))
    {
        cout << n/2 << " " << n/2<< "\n";
        return;
    }



    for(int i = 2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            cout << n - (n/i) << " " << n/i << "\n";
            return;
        }
    }
    
    cout << 1 << " " << n-1 << "\n";

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
