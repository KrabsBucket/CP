#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int n,k; cin >> n >> k;
    vector<int> vec(n);

    rep(i, 0, n)
    {
        cin >> vec[i];
    }

    int c = 0;

    rep(i, 0, n)
    {
        int p = 0;
 
        rep(j, 0, n)
        {
            if (vec[j] >= vec[i] && vec[j] <= vec[i] + k)
            {
                p++;
            }
        }
        c = max(p, c);
    }

    cout << c << "\n";
    
}

int main() {
    fastio;

     freopen("diamond.in", "r", stdin);
     freopen("diamond.out", "w", stdout);

    solve();

    return 0;
}
