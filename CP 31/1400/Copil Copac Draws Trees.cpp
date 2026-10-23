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

vector<vector<pair<int,int>>> adj;
int dfs(int c, int p, int curr, int idx)
{
    int ans = curr;
    for(auto u : adj[c])
    {
        if(u.first != p)
        {
            int nxt = curr;
            if (u.second < idx)
            {
                nxt++;
            }
            ans = max (ans, dfs(u.first, c, nxt, u.second));
        }
    }
    return ans;
}
void solve() {
    int n; cin >> n;
    adj.assign(n, vector<pair<int,int>>());
    for(int i = 0;  i < n-1; i++)
    {
        int x,y; cin >>x >> y;
        x--;y--;
        adj[x].push_back({y, i});
        adj[y].push_back({x, i});
    }
    int s = dfs(0, -1, 1, -1);
    
    cout << s << "\n";

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
