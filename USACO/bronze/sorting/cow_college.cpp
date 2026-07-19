#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n; 
   vector<ll> tut(n);
   rep(i, 0, n)
   {
       cin >> tut[i];

   }


   sort(tut.begin(), tut.end());

   ll m = 0;
   ll opt = 0;
   rep(i, 0, n)
   {
       ll c = (long long)tut[i]*(n-i);
       if (c > m)
       {
           m = c;
           opt = tut[i];
       }
   }

   cout << m << " " << opt << "\n";


}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
