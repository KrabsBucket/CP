#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    ll x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
    cin >> x1 >> y1 >> x2 >> y2; //white
    cin >> x3 >> y3 >> x4 >> y4; //black
    cin >> x5 >> y5 >> x6 >> y6; //black



    ll b1 = max(0LL, (min(x2, x4) - max(x1, x3))) * max(0LL, (min(y2, y4) - max(y1, y3)));
    ll b2 = max(0LL, (min(x2, x6) - max(x1, x5))) * max(0LL, (min(y2, y6) - max(y1, y5)));

    ll b3_w = max(0LL, min({x2, x4, x6}) - max({x1, x3, x5}));
    ll b3_h = max(0LL, min({y2, y4, y6}) - max({y1, y3, y5}));
    ll b3 = b3_w * b3_h;

    ll w = abs((x1- x2)* (y1-y2));
    
    cout << ((w > b1+b2-b3) ? "YES\n" : "NO\n");

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

        solve();

    return 0;
}
