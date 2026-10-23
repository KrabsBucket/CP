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
vector<int> res;
vector<int> ans;
void dfs(int c)
{

    if(res[c])
    {
        int p = adj[c].size();
        int q = 0;
        for(auto u : adj[c])
        {
            q += res[u];
        }

        if(p == q)
        {
            ans.push_back(c);
        }

    }

    for(auto u : adj[c])
    {
        dfs(u);
    }

}

void solve() {
   int n; cin >> n;
   adj.assign(n, vector<int>());
   res.assign(n, int());
   int root = 0;
   for(int i = 0; i < n; i++)
   {
       int x, y; cin >> x >> y;
       x--;
       if(x >= 0)
       {
       adj[x].push_back(i);
       }
       else
       {
           root = i;
       }
       res[i] = y;
   }
   dfs(root);
 
   if(!ans.size())
   {
       cout << -1 << "\n";
       return;
   }

   sort(ans.begin(), ans.end());
   for(auto u : ans)
   {
       cout << u + 1 << " ";
   }
   cout << "\n";



   


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
