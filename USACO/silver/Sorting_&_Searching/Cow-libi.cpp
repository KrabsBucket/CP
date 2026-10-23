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
    struct st{
        ll x, y, t;
    };
   int g, n; cin >> g >> n;
   vector<st> giv(g), cow(n);  
   for(int i = 0; i < g ;i++)
   {
       int x, y,t;cin >>giv[i].x >> giv[i].y >> giv[i].t;
   }
   for(int i = 0; i < n; i++)
   {
       int x, y, t; cin >> cow[i].x >> cow[i].y >> cow[i].t;
   }

   sort(giv.begin(), giv.end(), [](const st &a , const st &b)
           {
           return a.t < b.t;
           });

   int ct = 0;
   for(auto c : cow)
   {
       auto it = upper_bound(giv.begin(),giv.end(),st{c.x, c.y, c.t},[](const st &a , const st &b)
       {
            return a.t < b.t;
       });
       int a = 0 ;
       int idx = it-giv.begin();
       if(idx < g && (giv[idx].t - c.t)*(giv[idx].t - c.t) < (giv[idx].x - c.x)*(giv[idx].x - c.x) + (giv[idx].y - c.y)*(giv[idx].y - c.y))
       {
           a = 1;
       }
       if(idx > 0&& (giv[idx-1].t - c.t)*(giv[idx-1].t - c.t) < (giv[idx-1].x - c.x)*(giv[idx-1].x - c.x) + (giv[idx-1].y - c.y)*(giv[idx-1].y - c.y))
       {
           a = 1;
       }
       if(a)
       {
           ct++;
       }
   }
   cout <<ct << "\n";





}

int main() {
    fastio;


        solve();

    return 0;
}
