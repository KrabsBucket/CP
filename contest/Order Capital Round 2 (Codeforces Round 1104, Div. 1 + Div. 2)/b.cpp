#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> c(n);
    vector<int> d;
    rep(i, 0, n)
    {
        cin >> a[i];
        c[i].first= a[i];
        c[i].second = i;
    }

    rep(k, 0, n)
    {
        cin >> b[k];
    }

    sort(c.begin(), c.end());

    int t =0;
    int count = 0;
    rep(i, 0, n)
    {
        if (b[i] - c[i].first < 0)
        {
            cout << -1 << "\n";
            return;
        }

    }

    rep(i, 0, n)
    { int p = -1;

        rep(k, 0, a.size())
        {
            if(a[k] <= b[i])
            {
                p = k;
                break;
            }
        }

        count+=p;
        a.erase(a.begin() + p);

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
