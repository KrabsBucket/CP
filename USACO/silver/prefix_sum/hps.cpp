#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<vector<int>> vec(n+1, vector<int> (4));

   rep(i, 1, n+1)
   {
       char c; cin >> c;
       if (c == 'H')
        {
            vec[i][2]++;
       }
       else if(c == 'P')
       {
           vec[i][3]++;
       }
       else
       {
           vec[i][1]++;
       }

       vec[i][1] += vec[i-1][1];
       vec[i][2] += vec[i-1][2];
       vec[i][3] += vec[i-1][3];

   }

   int m = 0;
    for(int x = 0; x < n  ;x++) 
    {
        int c = max(max(vec[x][1], vec[x][2]), vec[x][3]);
        int d = max(max(vec[n][1]-vec[x][1],vec[n][2]- vec[x][2]),vec[n][3] -vec[x][3]);
        m = max(m, c+d); 
    }

    cout << m << "\n";
   
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("hps.in", "r", stdin);
     freopen("hps.out", "w", stdout);

    solve();

    return 0;
}
