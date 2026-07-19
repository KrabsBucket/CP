#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n,k; cin >> n >> k;
   string s; cin >> s;
   if (k > n/2)
   {
       cout << -1 << "\n";
       return;
   }

   int cr = 0;
   int cl = 0;
   rep(i, 0, k)
   {
       if (s[i] == 'L')
       {
           cl++;
       }
       if(s[n-i-1] == 'R')
       {
           cr++;
       }
   }

   cout << cr+cl << "\n";
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
