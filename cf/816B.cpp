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
    int n, k, q; cin >> n >> k >> q;
    vector<int> arr(200001);
    for(int i = 0 ; i < n; i++)
    {
        int l, r; cin >> l >> r;
        arr[l] += 1;
        arr[r+1] -= 1;
    }
    for(int i = 1; i <= 200001; i++)
    {
        arr[i] += arr[i-1];
    }
    vector<int> ans(200001);
    int c = 0;
    for(int i = 0; i < ans.size(); i++)
    {
        if(arr[i] >= k)
        {
            c++;
        }
        ans[i] = c;
        

    }
    for(int i = 0; i <  q; i++)
    {
        int x, y; cin >> x>>y;
        x--;
        cout << ans[y] - ans[x] << "\n";
    }
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
