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
ll cnt[2];
void dfs(int c, int p, int d)
{
    cnt[d]++;
    for(auto u : adj[c])
    {
        if (u != p)
        {
            dfs(u, c, 1-d);
        }
    }

}

void solve() {
   int n; cin >> n;
   adj.assign(n, vector<int>());
   for(int i = 0;i < n-1; i++)
   {
       int x,y; cin >> x >> y;
       x--; y--;
       adj[x].push_back(y);
       adj[y].push_back(x);
   }
   cnt[0] = 0;
   cnt[1] = 0;
   dfs(0, -1, 0);
   cout << cnt[0]* cnt[1] - n + 1<< "\n";




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
