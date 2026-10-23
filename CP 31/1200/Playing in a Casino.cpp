#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n,m; cin >> n >> m;
    vector<vector<int>> matrix(m, vector<int> (n , 0));

    rep(i, 0 , n)
    {
        rep(j, 0 , m)
        {
            cin >> matrix[j][i];
        }
    }
    rep(i, 0, m)
    {
        sort(matrix[i].begin(), matrix[i].end());
    }

    ll total = 0;

    rep(i, 0, m)
    {
        ll idx = 1- n;
        rep(j, 0 ,n)
        {
            total += idx*(matrix[i][j]);
            idx += 2;
        }
    }

    cout << total << "\n";


    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
