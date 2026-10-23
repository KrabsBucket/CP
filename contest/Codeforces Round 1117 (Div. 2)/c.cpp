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
vector<int> dam;
vector<int> ans;
int dfs(int c)
{
    int isdam = dam[c];
    vector<int> valid;
    for(int u : adj[c])
    {
        if(dfs(u) == 1)
        {

            valid.push_back(u);
            isdam = 1;
        }

    }
    if(dam[c] == 1)
    {
        for(int u : valid)
        {
            ans[u] = 1;
        }
    }
    else if(valid.size() > 0)
    {
        for(int i = 1; i < valid.size(); i++)
        {
            ans[valid[i]] = 1;
        }
    }

    return isdam;
}

void solve() {
    int n; cin>>n;
    adj.assign(n, vector<int>());
    for(int i =1; i < n; i++)
    {
        int a; cin >> a;
        a--;
        adj[a].push_back(i);

    }
    int m ; cin >> m;
    dam.assign(n, 0);
    ans.assign(n, 0);
    for(int i =0 ;  i < m; i++)
    {
        int x ; cin >> x;
        x--;
        dam[x] = 1;
    }
    dfs(0);
    int c = m-1;
    cout << c << " ";

    for(int i = 0; i < n ; i++)
    {
        if( ans[i] == 1)
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
