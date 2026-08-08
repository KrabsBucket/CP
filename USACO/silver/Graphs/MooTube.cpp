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
int coun;
void dfs(int c, int p, int k)
{
    coun++;
    for(auto u : adj[c])
    {
        int n = u.first;
        int w = u.second;

        if (n != p)
        {
            if(w >= k)
            {
                dfs(n, c, k);
            }
        }
    }


}

void solve() {
    int n, q; cin >> n >> q;
    adj.assign(n, vector<pair<int,int>>());
    for(int i = 0; i < n-1; i++)
    {
        int x, y, w; cin >> x>> y >> w;
        x--; y--;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }


    for(int i = 0; i < q; i++)
    {
        int k , v; cin >> k >> v;
        v--;
        coun = -1;
        dfs(v, -1, k);
        cout << coun << "\n";
    }
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("mootube.in", "r", stdin);
    freopen("mootube.out", "w", stdout);

    solve();

    return 0;
}
