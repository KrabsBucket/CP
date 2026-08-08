#include <bits/stdc++.h>
#include <iostream>
#include <map>
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
   map<int, int> mp;

   int damage = 0;
   for(int i =0; i < n; i++)
   {
       int x; cin >> x;
       mp[x]++;

   }
   for(auto [a,b] : mp)
   {
       if (b > (n+1)/2 && b > 2)
       {
           damage += (n-b+2)*a;

        }
       else
       {
            damage += (b*a);
       }
   }

   cout << damage << "\n";
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
