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
vector<int> comp;

void dfs(int node, int c)
{
    comp[node] = c;
    for(auto n : adj[node])
    {
        if(!comp[n])
        {
            comp[n] = c;
            dfs(n, c);
        }

    }


}

void solve(){
    int n, m; cin >> n >> m;
    vector<int> arr(n);
    bool flg = false;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]--;
        if(arr[i] != i)
        {
            flg = true;
        }
    }
    if (!flg)
    {
        cout << -1 << "\n";
        return; 
    }

    struct holes{
        int x, y, w;
    };

    vector<holes> worm(m);
    for(int i = 0; i < m; i++)
    {
        cin >> worm[i].x >> worm[i].y >> worm[i].w;
        worm[i].x--;
        worm[i].y--;
    }
    int low = 1;
    int high = 1e9;


    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low )/2;
        adj.assign(n,vector<int>());
        comp.assign(n, 0);

        for(int i = 0; i < m ; i++)
        {
            if(worm[i].w >= mid)
            {
                adj[worm[i].x].push_back(worm[i].y);
                adj[worm[i].y].push_back(worm[i].x);
            }
        } 

        int c = 1;
        for(int i = 0; i < n;i++)
        {
            if (!comp[i])
            {
                dfs(i, c);
                c++;

            }
        }

        bool flg = true;
        for(int i = 0; i < n; i++)
        {
            if (comp[i] != comp[arr[i]])
            {
                flg = false;
            }
        }
        if (flg)
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }

    }
    cout << ans << "\n";




}


int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("wormsort.in", "r", stdin);
    freopen("wormsort.out", "w", stdout);

    solve();

    return 0;
}
