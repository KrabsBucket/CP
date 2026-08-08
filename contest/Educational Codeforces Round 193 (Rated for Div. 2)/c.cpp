#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   int n, m, x,y; cin >> n >>m >> x >> y;
   vector<int> a(x);
   vector<int> b(y);
   for(int i =0; i<x; i++)
   {
       cin >> a[i];
   }
   for(int i =0; i<y; i++)
   {
       cin >> b[i];
   }

   ll s1 = 0;
   ll s2 = 0;
   for(int i =0; i < min(x, n); i++)
   {
       if(i < y && a[i] != b[i])
       {
            s1+=a[i];
       }
       if(i >= y)
       {
           s1+=a[i];
       }

       
   }
   for(int i =0; i < min(y,m); i++)
   {
       if(i < x && a[i] != b[i])
       {
            s2+=b[i];
       }
       if(i >= x)
       {
           s2+=b[i];
       } 
   }
   cout << s2 << " s1  " << s1 << "\n" ;
   if (s2 > s1)
   {
       int m = min(x, n);
       if (s1 != 0)
       {
           m--;   
       }
        
       for(int i =0; i < m; i++)
       {
           s2+= a[i];
       }

   }
   else
   {
       int m = min(y, m);
       if(s2!=0)
       {
           m--;
       }
       for(int i =0; i < m ; i++)
       {
           s1+=b[i];
       }
   }
   

   cout << max(s1, s2) << "\n";


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
