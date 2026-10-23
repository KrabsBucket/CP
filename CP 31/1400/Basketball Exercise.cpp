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
    vector<int> b1(n), b2(n);
    for(auto &x : b1)
    {
        cin >> x;
    }
    for(auto &x : b2)
    {
        cin >> x;
    }
    vector<ll> top(n), bot(n);
    top[0] = b1[0];
    bot[0] = b2[0];

    for(int i = 1; i < n; i++)
    {   
        top[i] = max(bot[i-1]+ b1[i] , top[i-1]);
        bot[i] = max(top[i-1] + b2[i] , bot[i-1]);
    }

    cout << max(top[n-1], bot[n-1]) << "\n";



    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
