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

struct DSU {
    vector<int> parent,sz;

    DSU(int n)
    {
        parent.resize(n+1);
        sz.resize(n+1, 1);
        for(int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int i )
    {
        if(parent[i] == i)
        {
            return i;
        }

        return parent[i] = find(parent[i]);
    }

    void unite(int i, int j)
    {
        int bi = find(i);
        int bj = find(j);

        if(bi != bj)
        {
            if(sz[bi] < sz[bj])
            {
                swap(bi , bj);
            }
            parent[bj] = bi;
            sz[bi] += sz[bj];
        }
    }
    int szy(int x)
    {
        return sz[x];
    }

};

void solve() {

    int n, m; cin >> n >> m;
    DSU dsu(n);
    for(int i = 0; i < m; i++)
    {
        int s; cin >> s;
        int x;
        if(s > 0)
        {
             cin >> x;
        }
        for(int j = 1; j < s; j++)
        {
            int y; cin >> y;
            dsu.unite(x, y);
        }

    }
    for(int i = 1; i <= n; i++)
    {
        cout << dsu.szy(dsu.find(i)) << " " ;
    }
    cout << "\n";
        





    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
