#include <bits/stdc++.h>
#include <iostream>
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
   if ( n == 1 || n==2)
   {
       cout << 4 << "\n";
       return;
   }
    ll k = 0;
   if (n%2)
   {
       k = 2*(n/2 + 1)*(n/2 + 2);
   }
   else
   {
       k = (n/2 + 1)*(n/2+ 1);
   }
   cout << k << "\n";
   
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    solve();

    return 0;
}

