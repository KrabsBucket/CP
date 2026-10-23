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
   vector<int> rows[100005]; 
   vector<int> cols[100005]; 
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           int x; cin >> x;
           rows[x].push_back(i);
           cols[x].push_back(j);
       }

   }
   ll s = 0;
   for(int i = 0; i < 100005; i++)
   {
       int k = rows[i].size();
       sort(rows[i].begin(), rows[i].end());
       for(int j = 0; j  < k ; j++)
       {
           s += (1LL)*(j- (k-1-j))*rows[i][j];
       }

   }
   for(int i = 0; i < 100005; i++)
   {
       int k = cols[i].size();
       sort(cols[i].begin(), cols[i].end());
       for(int j = 0; j < k ; j++)
       {
           s += (1LL)*(j - (k-1-j))*cols[i][j];
       }

   }
   cout << s << "\n";

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
