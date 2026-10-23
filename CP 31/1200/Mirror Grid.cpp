#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<vector<int>> matrix(n, vector<int> (n, 0));

    rep(i, 0 ,n)
    {
        rep(k, 0 , n)
        {
            char c;
            cin >> c;

             matrix[i][k] = c - '0';
        }
    }

    int count = 0;

    rep(i, 0 , n/2)
    {
        rep(k, 0 , (n+1)/2)
        {
            int s = matrix[i][k] + matrix[k][n -1-i] + matrix[n-1 - i][n -k-1] + matrix[n - 1-k][i];
            count += min(s, 4-s);

        }
    }
    
    
    cout << count << "\n";

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
