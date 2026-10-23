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
    int n; cin >>n ;
    int z=0, o = 0, t = 0;
    for(int i = 0; i < n; i++ )
    {
        int x; cin >> x;
        if(x == 0)
        {
            z++;
        }
        else if(x == 1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }
    if( o < t)
    {
        z += (o);
        t-= o;
        while(t > 2)
        {
            z+= 1;
            t-=3;
        }
    }
    else
    {
        z+= (t);
        o-=t;
        while(o > 2)
        {
            z+= 1;
            o-=3;
        }
    }
    cout << z << "\n";
     
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
