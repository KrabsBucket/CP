#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, k; cin >> n >> k;

    if (k >= n)
    {
        cout << n << "\n";
        return;
    }

    int ans = 0;
    rep(i, 0, k)
    {
        int diff = n/(k-i);
        int b = 2;
        int count = 0;
        while (b-1 <= diff)
        {
            b *= 2;
            count++;
        }
        ans += count;
        n -= (pow(2, count)-1);


    }
    cout << ans << "\n"; 
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
