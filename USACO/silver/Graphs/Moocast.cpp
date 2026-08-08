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
void dfs(int node)
{
    for(int n : adj[node])
    {
        if (!chk[n])
        {
            chk[n] = true;
            dfs(n);
        }

    }
}



void solve() {
   int n;cin >> n;
   struct cows{
       int x, y, p;
   };

   vector<cows> cw(n);
    adj =vector<vector<int>> (n);

    for(int i =0; i < n; i++)
    {
        cin >> cw[i].x >> cw[i].y >> cw[i].p;
    }

    for(int i=0; i < n;i++)
    {
         for(int j = 0; j < n; j++)
        {
            float x = (cw[i].x - cw[j].x);
            float y = (cw[i].y - cw[j].y);
            x*=x; y*=y;
            if (cw[i].p >= sqrt(x+y))
            {
                adj[i].push_back(j);
            }
        }
    }

    int c = INT_MIN;
    for(int i = 0; i < n;i++)
    {
        int count = 0;
        chk = vector<bool> (n, false);
        chk[i] = true;
        dfs(i);

        for(bool x : chk)
        {
            if (x)
            {
                count++;
            }
            
        }

        c = max(count, c);
    }


    cout << c << "\n";


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("moocast.in", "r", stdin);
     freopen("moocast.out", "w", stdout);

    solve();

    return 0;
}
