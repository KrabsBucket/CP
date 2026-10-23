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
   int n ; cin >> n;
   vector<int> a(n);
   ll tot = 0;
   for(auto &x : a)
   {
       cin >> x;
       tot += x;
   }

   vector<int> suff(n);
   suff[n-1] = a[n-1];

   ll trp = suff[n-1];
   for(int i = n-2; i >=0; i--)
   {
       suff[i] = min(a[i], suff[i+1]);
       trp += suff[i];
   }
   int gain = 0;

   stack<int> s;
   for(int i =0;i < n; i++)
   {
       int L = -1;
       while(!s.empty() && a[s.top()] >= a[i])
       {
            s.pop();
       }
       if(!s.empty())
       {
           L = s.top();
       }
       int r = (i == n-1) ? 2e9 : suff[i+1];
       if(a[i] < r)
       {
           int c = (i - L) -1;
           gain = max(c, gain);
       }
       s.push(i);
   }
   cout << gain + tot - trp << "\n";

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
