#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, c; cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);
    int cost = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    
    bool flag = true;
    rep(i, 0, n)
    {
        cin >> b[i];
        if (a[i] < b[i])
        {
            flag = false;
        }
        cost += a[i] - b[i];
    }

    if (flag)
    {
        cout << cost << "\n";
        return;
    }




    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cost = c;
    rep(i, 0, n)
    {
        if (a[i] < b[i])
        {
            cout << -1 << "\n";
            return;
        }
        cost += a[i]-b[i];

    }

    cout << cost << "\n";
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
