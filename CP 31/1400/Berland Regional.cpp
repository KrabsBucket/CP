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
    for(auto &x : arr)
    {
        cin >> x;
    }
    vector<vector<ll>> vec(n);
    vector<ll> ans(n, 0);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        vec[arr[i]-1].push_back(x);

    }
    for(int i = 0; i < n; i++)
    {
        sort(vec[i].rbegin(),vec[i].rend());
        int m = vec[i].size();
        for(int j = 0; j < m-1; j++)
        {
            vec[i][j+1] += vec[i][j];
        }
        for(int k = 1; k <= m; k++)
        {
            int idx = (m/k)*(k);
            ans[k-1] += vec[i][idx-1];

        }


    }

    for(auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
        
    
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
