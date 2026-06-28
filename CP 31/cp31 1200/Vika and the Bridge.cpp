#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n, k; cin >> n >> k;
   vector<int> planks(n);

   rep(i, 0 ,n)
   {
       cin >> planks[i];
   }
   vector<vector<int>> data(k+1);
    rep(i, 1, k+1)
    {
        data[i].push_back(-1);
    }
   rep(i, 0 , n)
   {
       data[planks[i]].push_back(i);
   }

   rep(i, 1, k + 1) {
        data[i].push_back(n);
    }
    
   int m = INT_MAX;
   rep(i, 1 ,k+1)
   {
       int max1 = 0;
       int max2 = 0;
       rep(j, 0, data[i].size()-1)
       {
           int diff = data[i][j+1] - data[i][j]-1;
           if (diff >= max1)
           {
               max2 = max1;
               max1 = diff;

           }

           else 
           {
               max2 = max(max2, diff);
           }
           
       }

           int t = max(max1/2, max2);
           m = min(t, m);
 
   }


      cout << m <<"\n";



    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE    
        freopen("/users/divyesamdani/documents/stuff/input.txt", "r", stdin);
        // freopen("/users/divyesamdani/documents/stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
