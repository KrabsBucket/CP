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
vector<int> visited;
bool possible = true;

void dfs(int node, int curr)
{
    for(int n : adj[node]){
        if(!visited[n]){
            visited[n] = 3 - curr;
            dfs(n, 3 - curr);
        }
        else if (visited[n] == curr)
        {
            possible = false;
            return;
        }
    }

}



void solve() {

    int n, m; cin >> n >> m;
    adj = vector<vector<int>> (n);
    visited = vector<int> (n);

    for(int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        }

    for(int i = 0; i < n; i++)
    {
        if (visited[i]) continue;

        visited[i] = 1;
        dfs(i, 1);
    }


    if(!possible)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    for(int &x : visited)
    {
        cout << x << " ";
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
