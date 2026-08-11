#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int n; cin >> n;
    vector<int> arr(n);

    int m = 0;
    rep(i, 0, n)
    {
        int a,b,g;
        cin >> a >> b >> g;
        swap(arr[a-1] ,arr[b-1] );
        arr[g-1]++;
        m = max(m, arr[g-1]);
    }

    cout << m << "\n";

    
}


int main() {
    fastio;

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
        solve();

    return 0;
}
