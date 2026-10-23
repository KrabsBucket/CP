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
   int n, m; cin >>n >>m;
   int c2= 0, c5= 0;
   int q = m;
   int p = n;
   while(p%5== 0)
   {
       p/=5;
       c5++;
   }
   while(p%2== 0)
   {
       p/= 2;
       c2++;
   }
   ll s = 1;
   while(m > 0)
   {
       if(c5 > c2 && s*2< q)
       {
           s*=2;
           m/=2;
           c2++;
       }
       else if(c2> c5 && s*5 < q)
       {
           s*=5;
           m/=5;
           c5++;
       }
       else
       {
           while(m > 0)
           {
               m/=10;
               s*=10;
               c5++;
               c2++;
           }

       }


   }
   s/=10;
   if(c5 == 0 && c2 == 0)
   {
       cout << n*q << "\n";
       return;
   }
   cout << (n*(s*(q/s)))<< "\n";
   
   



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
