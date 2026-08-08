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

const int maxn = 2*(10e5);
vector<int> adj[maxn];
int coun [maxn];

void dfs(int s, int e)
{
    coun[s] = 1;

    for(auto u : adj[s])
    {
        if (u == e) continue;

        dfs(u, s);

        coun[s] += coun[u];
    }


}


void solve() {
   int n; cin >> n;
   for(int i = 1; i < n;i++)
   {
       int x; cin >> x;
       x--;
       adj[x].push_back(i);
       adj[i].push_back(x);
   }

   dfs(0, -1);
   for(int i = 0; i < n; i++)
   {
       cout << coun[i]-1 << " ";
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
