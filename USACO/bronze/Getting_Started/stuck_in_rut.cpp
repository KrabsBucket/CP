#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<vector<int>> vec(n, vector<int> (3));

   rep(i, 0, n)
   {
        char s; cin >> s;
       vec[i][0] = (s == 'E') ? 0 : 1;

       rep(k, 1, 3)
       {
            cin >> vec[i][k];
       }
   }

   rep(i, 0, n)
   {
       rep(k,0, n)
       {
           
       }
   }


    
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    solve();

    return 0;
}
