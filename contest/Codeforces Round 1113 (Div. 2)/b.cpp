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
    
    int n,m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i =0; i < m; i++)
    {
        cin >>b[i];
    }
    if (n < 2*m)
    {
        cout<< "NO\n";
        return;
    }



    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(n == m)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                cout << "No\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }
    for(int i = 0; i < m ; i++)
    {
        int trgt = b[i];
        auto it = lower_bound(a.begin(), a.end(), trgt);
        int idx = it - a.begin();
        if (n - idx  < m - i || (idx) <= i)
        {
            cout << "no\n";
            return;
        }
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
