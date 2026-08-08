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
   vector<int> stab(n);
   for(int i =0; i < n; i++)
   {
       cin >> stab[i];
       if (i > 0)
       {
           stab[i] = min(stab[i], stab[i-1]);
       }
   }
   vector<vector<int>> mat(n, vector<int> (m));
   for(int i= 0;i < n; i++)
   {
    
       for(int j =0; j < m;j++)
       {
           cin >> mat[i][j];
       }
   }

   int blocks = m;
   int cost;
   vector<int> best(2*m, 0);
   for(int i = n-1; i>=0; i--)
   {
        cost = stab[i];
        for(int j=m; j < 2*m; j++)
        {
            best[j] = (mat[i][j-m]);
        }
        sort(best.rbegin(), best.rend());
        int j = 0;
        while(cost > 0 && j < m)
        {
            cost -= best[j];
            j++;
        }
        blocks = min(j, blocks);

   }

   cout << blocks << "\n";



}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        if (!freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin)) {
            cerr << "ERROR: Could not open input.txt!" << "\n";
            return 1;
        }
    #endif

    int t;
    // This checks if 't' actually received a valid number from the file
    if (!(cin >> t)) {
        cerr << "ERROR: input.txt is empty or invalid!" << "\n";
        return 1;
    }
    
    while(t--) {
        solve();
    }

    return 0;
}
