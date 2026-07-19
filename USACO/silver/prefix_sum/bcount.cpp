#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n, q; cin >> n >> q;
   vector<vector<int>> vec (n+1, vector<int> (4));
   
   rep(i, 1, n+1)
   {
       int x; cin >> x;
       vec[i][x] ++;
       vec[i][1] += vec[i-1][1];
       vec[i][2] += vec[i-1][2];
       vec[i][3] += vec[i-1][3];
   }
   rep(i, 0, q)
   {
       int x, y; cin >> x >> y;
       cout << vec[y][1] - vec[x-1][1] << " " <<  vec[y][2] - vec[x-1][2]  << " " << vec[y][3] - vec[x-1 ][3] << "\n"; 
   } 

}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("bcount.in", "r", stdin);
     freopen("bcount.out", "w", stdout);

    solve();

    return 0;
}
