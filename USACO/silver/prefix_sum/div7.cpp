#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<ll> vec(7, -1);
   vec[0] = 0;
   ll c = 0;
   int x = 0;
   rep(i, 1, n+1)
   {
       int y ; cin >> y;
       x = (x+y)%7;

       if(vec[x] != -1)
       {
           c = max(c, (i-vec[x]));
       }
       else
       {
           vec[x] = i;
       }
   }
   cout << c << "\n";
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    freopen("div7.in", "r", stdin);
     freopen("div7.out", "w", stdout);

    solve();

    return 0;
}
