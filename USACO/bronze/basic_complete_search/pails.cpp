#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int x, y, m; cin >> x >> y >> m;

    int mm =0;
    for(int i = 0; i * y <= m; i++)
    {
        int my = i*y;
        int lm = m - my;
        int mx = (lm/x)*x;
        int cm = mx+my;

        mm = max(cm, mm);
    }
    cout << mm << "\n";


    
}

int main() {
    fastio;

     freopen("pails.in", "r", stdin);
     freopen("pails.out", "w", stdout);

        solve();

    return 0;
}
