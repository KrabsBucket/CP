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
   int n, m; cin >> n >> m;
   if(m == 1)
   {
       int c = INT_MIN;
       for(int i = 0; i < n; i++)
       {
           int x; cin >> x;
             c = max(c, x);
       }

       cout << c << "\n";
       return;
   }
   priority_queue<int> pq;
   ll ans = - INF;
   ll score = 0;
   for(int i = 1 ; i < m; i++)
   {
       int x; cin >>x;
       pq.push(x);
       score -= ((x));
   }
   for(int i = m; i <= n; i++)
   {
       int x; cin >> x;
       ans = max(ans, ((1LL)*x*m + score));
       if(pq.top() > x)
       {
           score += pq.top();
           pq.pop();
           pq.push(x);
           score -=(x);

       }
   }
   cout << ans << "\n";
   


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
