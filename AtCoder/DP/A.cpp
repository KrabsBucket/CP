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
    vector<int> dp(n+1);
    for(auto &x : arr)
    {
        cin >> x;
    }
    dp[1] = abs(arr[1] - arr[0]);
    for(int i = 2; i <= n; i++)
    {
        dp[i] = min(dp[i-1] + abs(arr[i-1] - arr[i]) , dp[i-2] + abs(arr[i-2] - arr[i]));
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
