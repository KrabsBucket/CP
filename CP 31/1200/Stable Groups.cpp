#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void  solve() {
    int n; cin >> n;
    ll k, x; cin >> k >> x;
    vector<ll> arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    vector<ll> a;
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    rep(i, 0 ,n-1)
    {
        ll diff = arr[i+1] - arr[i];
        if (diff > x)
        {
            a.push_back((diff-1)/x);
        }
    }

    if (k == 0)
    {
        cout << (a.size()+1) << "\n";
        return;
    }
    sort(a.begin(), a.end());
    int count = 0;

    rep(i, 0 , a.size())
    {
        if (k - a[i] >= 0)
        {
            k -= a[i];
            count += 1;
        }
        else
        {
            break;
        }
        
    }

    cout << a.size() - count + 1   << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

        solve();

    return 0;
}
