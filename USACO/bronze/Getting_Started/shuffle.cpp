#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void  solve() {
   int n; cin >> n;
   int count = 0;
   vector<int> order(n);
   vector<int> pos1(n);
   vector<int> pos2(n);
   rep(i, 0, n)
   {
       cin >> order[i];
       if (order[i] != (i+1))
       {
           count++;
       }
   }
   rep(i, 0, n)
   {
       cin >> pos1[i];
   }
   rep(i, 0, 3) 
   {
       rep(k, 0, n)
       {
        pos2[k] = pos1[order[k]-1];
       }

    pos1 = pos2;
   }
   rep(i, 0, n)
   {
       cout << pos2[i] << "\n";
   }
}

int main() {
    fastio;


     freopen("shuffle.in", "r", stdin);
     freopen("shuffle.out", "w", stdout);

    solve();

    return 0;
}
