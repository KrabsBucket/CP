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

double dfs(int c, int p)
{
    double sum = 0;
    int child = 0;
    for(int u : adj[c])
    {
        if (u != p)
        {
            sum += dfs(u, c);
            child++;
        }

    }

    if (child == 0)
    {
        return 0.0;
    }

    return (sum/child)+1.0;
     
}

void solve() {
   int n; cin >> n;
   adj.assign(n, vector<int>());
   for(int i = 1;i < n; i++)
   {
       int x,y; cin >> x >> y;
       x--; y--;
       adj[x].push_back(y);
       adj[y].push_back(x);


   }



   
   cout << fixed << setprecision(15) <<  dfs(0,-1) << "\n";



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
