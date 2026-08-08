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
   vector<int> b(n);
   for(int i=0; i < n; i++)
   {
       cin >> b[i];
   }
   
    b.push_back(0);
   

   sort(b.rbegin(), b.rend());
   for(int i = 2; i < n; i++)
   {
       if (b[i] != b[i-2]%b[i-1 ])
       {
           cout << -1<< "\n";
           return;
       }
           
   }
    cout << b[0] << " " <<b[1]<< "\n";

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
