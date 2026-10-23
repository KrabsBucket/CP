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
    ll x,y; cin >> x >> y;
    ll x1, y1; cin >> x1 >> y1;
    int n; cin >> n;
    string s; cin >> s;
    ll u = 0, r = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
        {
            u++;
        }
        else if(s[i] == 'D')
        {
            u--;
        }
        else if(s[i] == 'L')
        {
            r--;
        }
        else
        {
            r++;
        }
    }

    ll lo = 1;
    ll hi = INF;
    ll ans = -1;
    while(lo <= hi)
    {
        ll m = lo + (hi - lo)/2;
        ll X = x + (m/n)*r;
        ll Y = y + (m/n)*u;

        for(int i = 0 ; i < m%n ; i++)
        {
            if(s[i] == 'U')
            {
                Y++;
            }
            else if(s[i] == 'D')
            {
                Y--;
            }
            else if(s[i] == 'L')
            {
                X--;
            }
            else
            {
                X++;
            }

        }

        ll mov = abs(x1-X)+ abs(y1 - Y) ;
        if(mov <= m)
        {
            ans = m;
            hi = m -1;
        }
        else
        {
            lo = m+1;
        }
    }
    cout << ans << "\n";


    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
