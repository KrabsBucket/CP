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
   ll a, b, c; cin >> a >> b >> c;
   if(abs(a+c - b) > abs(a-b))
   {
       cout << abs(a+c - b) << "\n";
   }
   else if(abs(b+c - a) < abs(b-a))
   {
       cout << abs(b+c-a) << "\n";
   }
   else
   {
       cout << abs(a-b) << "\n";
   }
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
