#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >>n;
   vector<pair<int, int>> t(n);

   rep(i, 0, n)
   {
       cin >> t[i].first >> t[i].second;

   }


   sort(t.begin(), t.end());
   
   int time = 0;
   rep(i, 0, n)
   {
       time = max(time, t[i].first);
       time+= t[i].second;
   }

   cout << time << "\n";


}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("cowqueue.in", "r", stdin);
     freopen("cowqueue.out", "w", stdout);

    solve();

    return 0;
}
