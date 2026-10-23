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
vector<int> dams;
vector<int> ans;
int dfs(int c)
    {
        int isda = dams[c];
        vector<int> valid;
        for(auto u : adj[c])
        {
            if(dfs(u) == 1)
            {
                valid.push_back(u);
                isda = 1;
            }
        }
        if(dams[c] > 0)
        {
            for(auto u : valid)
            {
                ans[u] = 1;
            }
        }
        else if (valid.size() > 0)
        {
            for(int i = 1; i < valid.size() ; i++)
            {
                ans[valid[i]] = 1;
            }

        }
        return isda;
        

    }


void solve() {
   int n; cin >> n;
   ans.assign(n, 0);
   adj.assign(n,vector<int>());
   dams.assign(n, 0);
   for(int i = 1; i < n; i++)
   {
       int x; cin >> x;
       x--;
        adj[x].push_back(i);
   }


   int m; cin >> m;
   for(int i = 0;i < m; i++)
   {
       int x; cin >> x;
       x--;
       dams[x]++;
   }


   dfs(0);


   cout << m -1<< " ";

   for(int i = 0; i < n; i++)
   {
       if(ans[i] == 1)
       {
           cout << i+1 << " ";
       }
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
