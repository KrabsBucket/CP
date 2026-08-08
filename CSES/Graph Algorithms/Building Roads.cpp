#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define piopcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)


vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node){
    for(int n : adj[node]){
        if(!visited[n]){
            visited[n] = true;
            dfs(n);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;

    adj = vector<vector<int>> (n);
    for(int i = 0; i<m;i++)
    {
        int a, b; cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    visited = vector<bool> (n);
    vector<int> city_reps;
    for(int i = 0;i < n;i ++)
    {
        if(visited[i]) continue;

        visited[i] = true;
        city_reps.push_back(i);
        dfs(i);
    }


    cout << city_reps.size() -1 << '\n';
    for(int i = 0; i < (int)city_reps.size()-1; i++){
        cout << city_reps[i] +1 << ' ' << city_reps[i +1] +1 << '\n';
    }



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
