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
   string s, s1, s2; cin >> s;

   for(int i = 0; i < s.size(); i++)
   {
       int idx = s[i] - 'A' + 1;
       if (idx == 20 || idx == 6 || idx == 14)
       {
           s1 += s[i];
       }
       else
       {
           s2 += s[i];
       }
   }

   sort(s1.begin(), s1.end(), greater<char>());

   cout << s1 + s2 << "\n";





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
