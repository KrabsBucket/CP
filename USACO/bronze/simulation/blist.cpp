#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<vector<int>> vec(n, vector<int> (3));
    
    rep(i, 0, n)
    {
        rep(j, 0, 3)
        {
            cin >> vec[i][j];
        }
    }

    int bucket = 0;
    rep(i, 0, n)
    {
        int b = 0;
        int c = vec[i][0];

        rep(j, 0, n)
        {
            if (vec[j][0] <= c  && vec[j][1] > c)
            {
                b += vec[j][2];
            }
        }
        bucket = max(bucket, b);
    }
    cout << bucket << "\n";
    

    
}

int main() {
    fastio;


     freopen("blist.in", "r", stdin);
     freopen("blist.out", "w", stdout);

    solve();

    return 0;
}
