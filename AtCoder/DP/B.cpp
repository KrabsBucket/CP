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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    vector<int> dp(n);
    for(int i=0 ;i <n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        int c = INT_MAX;
        for(int j = i-1; j >= max(0, i - k); j--)
        {
            c = min(c, dp[j] + abs(arr[j] - arr[i]));
        }
        dp[i] = c;
    }
    cout << dp[n-1] << "\n";
    
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
