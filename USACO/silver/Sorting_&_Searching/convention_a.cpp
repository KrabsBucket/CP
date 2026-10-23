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
    int n , m,c; cin >> n >> m >> c;
    vector<int> a(n);
    for(auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());

    ll lo = 0;
    ll hi = INF;
    ll ans = 0;
    while(lo <= hi)
    {
        ll t = (lo + (hi- lo)/2);
        int i = 0;
        for(int k = 0; k < m; k++)
        {
            if(i == n)
            {
                break;
            }
            int ct = a[i];
            int j = 0; 
            while(j < c && i < n && a[i] - ct <= t)
            {
                j++;
                i++;
            }

        }
        if(i == n)
        {
            ans = t;
            hi = t - 1;
        }
        else
        {
            lo = t+1;
        }

        
    }
    cout << ans << "\n";


    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("convention.in", "r", stdin);
     freopen("convention.out", "w", stdout);

    solve();

    return 0;
}
