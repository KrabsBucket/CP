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
string s;
int cnt = 0;
int dfs(int c, int b)
{
    
    if(s[c] == 'B')
    {
        b++;
    }
    else
    {
        b--;
    }
    for(auto u : adj[c])
    {
        b += dfs(u, 0);
    }
    if (b == 0)
    {
        cnt++;
    }
    return b;

}

void solve() {
   int n; cin >> n;

   cnt = 0;
   adj.assign(n, vector<int>());

   for(int i = 1; i < n; i++)
   {
       int x; cin >> x;
       x--;
       adj[x].push_back(i);
   }


   cin >> s;
   dfs(0, 0);

   cout << cnt << "\n";


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
