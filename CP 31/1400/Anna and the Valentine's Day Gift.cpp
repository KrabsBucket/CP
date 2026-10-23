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
   int n,m; cin >> n >> m;
   int s = 0;
   vector<int> a;
   for(int i = 0; i < n; i++)
   {
       int x; cin >> x;
       if(x%10 == 0)
       {    
           int p = 0;
           while(x%10 == 0)
           {
               p++;
               x/=10;
           }
           a.push_back(p);

       }
       while(x > 0)
       {
           s++;
           x/=10;
       }
       
   }

   sort(a.rbegin(), a.rend());
   for(int i = 1; i < a.size(); i+=2)
   {
       s+= a[i];
   }

   cout << (s > m ? "Sasha" : "Anna") << "\n";




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
