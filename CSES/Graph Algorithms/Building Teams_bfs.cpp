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



void solve() {

    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> visited(n);
    queue<int> q;
    for(int i = 0; i < m; i++)
    {
        int a,b; cin >> a >> b;
        a-- ; b--;
        adj[a] .push_back(b);
        adj[b].push_back(a);

    }

    for(int i = 0; i < n; i++)
    {
        if (visited[i]) continue;
        visited[i] = 1;
        q.push(i);

        while(!q.empty())
        {
            int curr = q.front();
            q.pop();

            int color = visited[curr] == 1 ? 2:1;
            for(int x : adj[curr])
            {
                if(!visited[x]){
                    visited[x] = color;
                    q.push(x);
                }

                else if(visited[x] == 3 - color )
                {

                    cout << "IMPOSSIBLE\n";
                    return;

                }

            }
        }
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
