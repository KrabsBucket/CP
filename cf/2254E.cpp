#include <bits/stdc++.h>
#include <iostream>
#include <set>
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
   multiset<ll> ms;
   ll an = 0;
   ll a1 = INT_MAX;
   for(int i =0; i < n; i++)
   {
       ll x; 
       cin >> x;
       ms.insert(x);
       if(x > 0)
       {
           a1 = min(a1, x);
       }
       an += x;

   }
   if(an <= 0)
   {
       cout << -1 << "\n";
       return;
   }
   auto it = ms.find(a1);
   ms.erase(it);
   vector<ll> ans(n);
   ans[0] = a1;
   for(int i = 1; i < n;i++)
   {
       auto it = ms.upper_bound(-ans[i-1]);
       if(it == ms.end())
       {
           cout << -1 << "\n";
           return;

       }
       ans[i] = *it;
       ans[i] += ans[i-1];
       ms.erase(it);

   }
   for(auto x : ans)
   {
       cout << x << " ";
   }
   
   cout << "\n";


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
