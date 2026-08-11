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
vector<vector<int>> adj, adj1;
int dis = -1;
int node = -1;

void dfs( int c, int p , int d)
{
    d++;
    if(d > dis)
    {
        dis = d;
        node = c;
    }
    for(auto u : adj[c])
    {
        if (u != p)
        {
            dfs(u, c, d);
        }
    }
}
void dfs1( int c, int p , int d)
{
    d++;
    if(d > dis)
    {
        dis = d;
        node = c;
    }
    for(auto u : adj1[c])
    {
        if (u != p)
        {
            dfs1(u, c, d);
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

    int m;cin >> m;
    adj1.assign(m, vector<int>());
    for(int i = 0; i < m-1; i++)
    {
        int a, b; cin >> a >> b;
        a--; b--;
        adj1[a].push_back(b);
        adj1[b].push_back(a);
    }
    dis = -1;
    node = -1;
    dfs(0, -1, 0);
    int node_a = node;

    dis = -1;
    dfs(node_a, -1, 0);
    int d1 = dis;

    dis = -1;
    node = -1;
    dfs1(0, -1, 0);
    int node_b = node;

    dis = -1;
    dfs1(node_b, -1, 0);
    int d2 = dis;

    int ans = (d1/2) + (d2/2) + 1;
    d1--;
    d2--;

    cout << max({ans , d1, d2})<< "\n";



    

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
