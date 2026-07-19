#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> arr(n+1);
    vector<int> parr(n+1);
    vector<int> sarr(n+2);
    
    rep(i, 1, n+1)
    {
        cin >> arr[i];
        if (i == 1)
        {
            parr[i] = arr[i]+i;
        }
        else
        {
             parr[i] = max(parr[i-1],arr[i]+i);
        }
    }

    for(int i = n; i >= 0; i--)
    {
        if ( i == n)
        {
            sarr[i] = arr[i]- i;
        }
        else
        {
             sarr[i] = max(sarr[i+1], arr[i]-i);
        }
    }
    int m = 0;
    rep(i, 2, n)
    {
        int c = arr[i] + parr[i-1] + sarr[i+1];
        m = max(c, m);

    }
     cout << m << "\n";
    
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
