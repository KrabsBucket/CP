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
vector<ll> dis;
vector<int> downs;
int n; 

void dfs(int c, int p, int d)
{
    dis[c] = d;
    downs[c] = 1;
    for(auto u : adj[c])
    {
        if(u != p)
        {
            dfs(u, c, d+1);
            downs[c] += downs[u];
        }
    }
}
void dfs1(int c, int p)
{
    for(auto u : adj[c])
    {
        if (u != p)
        {
            dis[u] = (dis[c] - downs[u]) + (n - downs[u]);
            dfs1(u, c);
        }
            
    }

}

    

void solve() {

    cin>> n;
    adj.assign(n, vector<int>());
    for(int i = 0; i < n-1;i++)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    downs.assign(n, 1);
    dis.assign(n, int());
    dfs(0, -1, 0);
    for(int u : dis)
    {
        dis[0] += u;
    }
    dfs1(0, -1);
    for(auto u : dis)
    {
        cout << u << " ";
    }
    cout << "\n";



    
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
