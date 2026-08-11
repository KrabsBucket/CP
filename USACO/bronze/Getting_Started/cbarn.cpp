#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    rep(i, 0, n)
    {
        cin >> vec[i];
    }

    int m = INT_MAX;
    rep(i, 0, n)
    {
        int c = 0;
        int p = i;
        rep(k, 0, n)
        {
            c += k*vec[p];
            p = (p == n-1) ? 0:(p+=1);
        }
        m = min(m, c);
    }
    
    cout << m << "\n";
    
}

int main() {
    fastio;


     freopen("cbarn.in", "r", stdin);
     freopen("cbarn.out", "w", stdout);

    solve();

    return 0;
}
