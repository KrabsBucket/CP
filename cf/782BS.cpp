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
    vector<double> pos(n), spd(n);
    for(auto &x : pos)
    {
        cin >> x;
    }
    for(auto &x : spd)
    {
        cin >> x;
    }
    double lo = 0;
    double tt =-1;
    double hi = INF;
    for(int j = 0 ; j < 100 ; j++)
    {
        double t = lo + (hi - lo)/2;
        double l = -1e18;
        double r = 1e18;

        for(int i = 0; i < n; i++)
        {
            l = max(l, pos[i] - t*spd[i]);
            r = min(r, pos[i] + t*spd[i]);
        }
        if( l <= r)
        {
            tt = t;
            hi = t;
        }
        else
        {
            lo =t;
        }

    }
    cout << fixed << setprecision(12) <<  tt << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif


    solve();

    return 0;
}
