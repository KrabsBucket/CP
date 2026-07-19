#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int k; cin >> k;
   int c = 0;
   rep(i, 0, k)
   {
       int x;
       cin >> x;
       if (x >=2)
       {
           c++;
       }

   }

   if ((k==1 && c > 0) || (k > 1 && c > 1))
   {
       cout << "YES\n";
   }
   else
   {
       cout << "NO\n";
   }
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
