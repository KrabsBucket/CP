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
int dis = -1;
int node = -1;
void dfs(int c, int p, int d)
{
    d++;
    if (d > dis)
    {
        dis = d;
        node = c;

    }
    for(auto u : adj[c])
    {
        if(u != p)
        {
            dfs(u, c, d);
        }
    }


}

void solve() {
    int n; cin >> n;
    adj.assign(n, vector<int>());
    for(int i = 0; i < n-1; i++)
    {
        int a, b; cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dis = -1;
    node = -1;
    dfs(0, -1, 0);
    dis = -1;
    dfs(node, -1, 0);
    
    cout << dis - 1<< "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
