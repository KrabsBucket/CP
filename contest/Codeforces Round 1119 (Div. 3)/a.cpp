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
   int n, k; cin >> n >> k;
   string s; cin >> s;
   int c = 0;
   for(int i = 0; i < n; i+=k)
   {
       bool flag = false;
       for(int j = i; j < k+i; j++)
       {
           if(s[j] == '0')
           {
               flag = true;
           }
       }
       if(!flag)
       {
            c++;
       }
   }
   cout << c << "\n";
   
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
