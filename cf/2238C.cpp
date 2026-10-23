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

vector<vector<int>> adj;

int guild = 0;
int dfs(int c)
{
    if(adj[c].size()== 0)
    {
        return 0;
    }
    int ma = INT_MIN, mn = INT_MIN;
    for(auto u : adj[c])
    {
        mn = max(mn, dfs(u));
        if(mn > ma)
        {
            swap(ma, mn);
        }
    }

    if(adj[c].size() >=2)
    {
        guild+=(mn+1);
    }

    return ma+1;
}



void solve() {
    int n; cin >> n;
    adj.assign(n, vector<int>());
    guild += n;
    for(int i = 1; i < n ; i++)
    {
        int x;cin >> x;
        x--;
        adj[x].push_back(i);
    }
    dfs(0);
    cout << guild << "\n";
    guild = 0;

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
