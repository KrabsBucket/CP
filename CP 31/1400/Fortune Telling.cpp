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
    
    ll n, x, y; cin >> n >> x >> y;
    ll s = 0;
    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        s += x;
    }
    ll ali = x;
    ll bob = x+3;
    ali+=s;
    bob +=s;

    if(y%2 == ali%2)
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
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
