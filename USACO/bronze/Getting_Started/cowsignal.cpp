#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int m, n, k; cin >> m >> n >> k;
    rep(i, 0, m)
    {
        string s; cin >> s;
        rep(i, 0, k)
        {
            rep(j, 0, n)
            {
                rep(p , 0 ,k)
                {
                    cout << s[j];
                }
            }
            cout << "\n";
        }
    }

    
}

int main() {
    fastio;

     freopen("cowsignal.in", "r", stdin);
     freopen("cowsignal.out", "w", stdout);

    solve();

    return 0;
}
