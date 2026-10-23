#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   int n; cin >> n;
   set<int> s;
   for(int i = 1; i<= n; i++)
   {
       int h; cin >> h;
       s.insert((h- i));
   }

   int m = 1;
   int c = 1;
   int pre = -2e9;

   for(int p : s)
   {
       if(p == pre+1)
       {
           c++;
           m = max(c, m);
       }

       else
       {
           c = 1;
       }
       pre = p;
   }
   cout << m << "\n";



}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
