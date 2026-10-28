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
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    int m = max({a[0],a[1],a[2]});
    int ct = 0;
    for(auto x : a)
    {
        if(x == m)
        {
            ct++;
        }
            
    }
    if(ct > 1)
    {
        for(auto x : a)
        {
            if(x == m)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << m+1 - x << " ";
            }
        }
            
    }
    else
    {
        for(auto x : a)
        {
            if(x == m)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << m+1 - x<< " ";
            }
        }

    }
    cout << "\n";
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
