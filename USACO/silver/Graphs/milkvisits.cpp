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
char cha;
vector<int> comp;


void dfs(int c,int p, char cha, int cnt)
{
    for(auto x: adj[c] )
    {
        if(x != p && !comp[x] && s[x] == cha)
        {
            comp[x] = cnt;
            dfs(x, c, cha, cnt);
            
        }
    }




}

void solve() {

    int n, m; cin >> n >> m;
    cin >> s;
    adj.assign(n, vector<int>());
    for(int i= 0; i< n-1; i++)
    {
        int x, y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    int cnt = 1;
    comp.assign(n, 0);
    for(int i = 0; i < n; i++)
    {
        if(!comp[i])
        {
            comp[i] = cnt;
            dfs(i, -1, s[i], cnt);
            cnt++;
        }
    }

    for(int i = 0; i < m; i++)
    {
        int a,b; char w; cin >> a >> b >> w;
        a--; b--;
        if(s[a] == w || s[b] == w || comp[a] != comp[b])
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }


    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("milkvisits.in", "r", stdin);
     freopen("milkvisits.out", "w", stdout);

    solve();

    return 0;
}
