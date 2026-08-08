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
vector<bool> closed;




void dfs(int node)
{
    for(int n: adj[node]){
        if(!chk[n] && !closed[n]){
            chk[n] = true;
            dfs(n);
        }

    }


}


void solve() {
    
    int n, m; cin >> n >> m;

    adj = vector<vector<int>> (n);
    for(int i = 0;i < m; i++)
    {
        int x,y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    closed = vector<bool> (n, false);

    for(int i = 0; i < n; i++)
    {
        chk = vector<bool> (n, false);
        bool flag = true;
        if (i > 0)
        {
            int x; cin >> x;
            x--;
            closed[x] = true;
        }
        for(int j = 0; j < n;j++)
        {
            if (!closed[j]){
                    chk[j] = true;
                    dfs(j);
                    break;
            }
        }

        for(int x = 0; x < n;x++)
        {
            if (chk[x] == false && !closed[x])
            {
                flag = false;
                break;
            }

        }

        cout << (flag ? "YES\n" : "NO\n");

    }






}


int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("closing.in", "r", stdin);
     freopen("closing.out", "w", stdout);

    solve();

    return 0;
}
