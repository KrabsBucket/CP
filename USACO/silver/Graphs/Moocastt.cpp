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

vector<bool> visited;
vector<pair<int, int>> vec;
int n;



void dfs(int curr, ll mid)
{
    visited[curr] = true;
   for(int i =0; i < n; i++ )
   {
       if(!visited[i])
       {
           int x = vec[i].first - vec[curr].first;
           int y = vec[i].second - vec[curr].second;
           ll dis = x*x + y*y;
           if (dis <= mid)
           {
               dfs(i, mid);
           }

       }
   }
};

void solve() {
    cin >> n;
    vec.assign(n, pair<int,int>());
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    ll low = 0;
    ll high = INF;

    while(low <= high)
    {
        ll mid = low + (high - low)/2;
        visited.assign(n, false);
        dfs(0, mid);

        bool flag = true;
        for (bool x : visited)
        {
            if (!x)
            {
                flag = false;
                break;
            }
        }


        if(flag)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
            

    }
     

    cout << low << "\n";



   


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
