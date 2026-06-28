#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> arr;

    rep(i, 1, n+1)
    {
        arr.push_back(i);
    }
    rep(i, 1, n)
    {
        arr.push_back(i);
        arr.push_back(i);

    }

    arr.push_back(n);
    for(int i = n; i > 0; i--)
    {
        arr.push_back(i);
    }
    arr.push_back(n);
    rep(i, 0, 4*n)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
