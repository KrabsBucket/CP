#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n, q; cin >> n >> q;
   vector<vector<int>> forest(n+1, vector<int>(n+1));
   vector<vector<int>> pfrst(n+1, vector<int>(n+1));
   rep(i, 0, n)
   {
       rep(j, 0, n)
       {
           char a; cin >> a;
           forest[i+1][j+1] = ((a == '*') ? 1 : 0); 
       }
   }
   rep(i, 0, n)
   {
       rep(j, 0, n)
       {
           pfrst[i+1][j+1] = forest[i+1][j+1] + pfrst[i][j+1] + pfrst[i+1][j] - pfrst[i][j]; 
       }
   }



   rep(i, 0, q)
   {
       int y1,x1,y2,x2;
       cin >> y1>> x1>> y2>>x2;
       cout << (pfrst[y2][x2] - pfrst[y1-1][x2] - pfrst[y2][x1-1] + pfrst[y1-1][x1-1]) << "\n";
   }

}

int main() {
    fastio;


    solve();

    return 0;
}
