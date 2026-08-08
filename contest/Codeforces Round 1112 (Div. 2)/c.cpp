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

   struct data{
       int l, r, u, v;
   };

   vector<data> vec(n);
   for(int i = 0; i < n; i++)
   {
       cin >> vec[i].l >> vec[i].r >> vec[i].u >> vec[i].v;
        
   }
   for(int m = n; m >= 0; m--)
   {
       int idx = 0;
       int s = 0;
       for(int j = 1; j <= m; j++)
       {

           while(idx < n){
           if ((j < vec[idx].l || j > vec[idx].r) && (((m-j+1) < vec[idx].u) || ((m-j+1) > vec[idx].v)))
           {
               s++;
               idx++;
               break;

           }

           idx++;
           }

       }

       if ( s == m)
       {
        cout << s << "\n";
        return;

       }
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
