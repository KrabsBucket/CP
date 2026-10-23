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
vector<ll> val;
int dfs(int c)
{
    for(auto u : adj[c])
    {
        val[c] += dfs(u);
    }
    return val[c]+1;

}
void dfs1(int c)
{
    for(auto u : adj[c])
    {
        val[u] += val[c];
        dfs1(u);
    }
}


void solve() {
    int n; cin >> n;
    adj.assign(n+1, vector<int>());
    val.assign(n+1, 1);
    for(int i = 1; i <= n; i++)
    {
        int l, r; cin >> l >> r;
        if(l !=0 && r!= 0)
        {
            adj[i].push_back(l);
            adj[i].push_back(r);
        }
    }
    dfs(1);
    dfs1(1);
    for(int i = 1; i <= n; i++)
    {
        cout << val[i]%MOD << " ";
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
