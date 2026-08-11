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
int days = 0;
void dfs(int c, int p)
{
    for(auto u : adj[c])
    {
        if(p != u)
        {
            int s = adj[u].size()-1;
            days += s;
            while (s > 0)
            {
                days++;
                s/=2;
            }
            dfs(u ,c);
        }
    }
}


void solve() {
   int n; cin >> n;
   adj.assign(n+1, vector<int>());
   adj[0].push_back(1);
   adj[1].push_back(0);
   for(int i = 0; i < n-1;i++)
   {
       int a, b; cin >> a >> b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
    dfs(0, -1);

    cout << days << "\n";





}

int main() {
    fastio;


    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
