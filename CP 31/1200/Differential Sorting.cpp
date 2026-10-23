#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<ll> arr(n);
    bool flag = true;
    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    rep(i, 0, n-1)
    {
        if(arr[i] > arr[i+1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << "\n";
        return;
    }
    
    if (arr[n-1] < arr[n-2] || arr[n-1] < 0)
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        cout << n-2 << "\n";
        rep(i, 1, n-1)
        {
            cout << i << " " << n-1  << " " << n << "\n";
        }
    }
    
    
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
