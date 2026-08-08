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
vector<bool> chk;

void dfs(int node)
{
    for(int n : adj[node])
    {
        if(!chk[n])
        {
            chk[n] = true;
            dfs(n);
        }

    }
}

void solve() {
   int n, m; cin >> n >> m;
   adj = vector<vector<int>> (n);
   vector<vector<int>> adj2 (n);
   for(int i =0; i < m;i++)
   {
       int x, y; cin >> x >> y;
       x--; y--;
       adj[x].push_back(y);
       adj2[y].push_back(x);
   }

       chk = vector<bool> (n, false);
       chk[0] = true;
       dfs(0);


       for(int x = 0; x < n; x++)
       {
           if (chk[x] == false)
           {
               
               cout << "NO\n"<<  1 <<" "<< x+1 << "\n";
               return;

           }
        }

       adj = adj2;

       chk = vector<bool> (n, false);
       chk[0] = true;
       dfs(0);


       for(int x = 0; x < n; x++)
       {
           if (chk[x] == false)
           {
               
               cout << "NO\n"<< x+1 <<" "<< 1 << "\n";
               return;

           }
        }

   


   cout << "YES\n";



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
