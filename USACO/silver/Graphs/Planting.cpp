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
   int n; cin >> n;
   vector<int> adj(n+1, 0);
    for(int i =0; i < n-1; i++)
    {
        int a, b;
        cin >> a>> b;
        adj[a]++;
        adj[b]++;
        adj[0] = max({adj[a], adj[b], adj[0]});  
    }
    cout << adj[0] + 1 << "\n";



}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("planting.in", "r", stdin);
     freopen("planting.out", "w", stdout);

    solve();

    return 0;
}
