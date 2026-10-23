#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    bool flg = 1;
    for(int i = 1; i< n; i++)
    {
        cin >> arr[i];
        if(arr[i] - arr[i-1] < 0)
        {
            flg = 0;
        }
    }
    if(flg)
    {
        cout << "YEs\n";
        return;
    }
    
    int m = arr[0];
    int s = -1;
    int k = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        m = max(m, arr[i]);
        if(arr[i] < m)
        {
            s = (m - arr[i]);
            k = max(s, k);
        }
    }
    m = arr[0];
    for(int i = 1; i < n;i++)
    {
        if(arr[i] < m)
        {
            arr[i] += k;
        }
        if(arr[i] < m)
        {
            cout << "NO\n";
            return;
        }
        m = max(m, arr[i]);

    }

    cout << "YES\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
