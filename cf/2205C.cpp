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
vector<int> seen(1e6+1, 0);


void solve() {
   int n; cin >> n;
   vector<vector<int>> arr(n);
   vector<int> taken(n);
   for(int i = 0; i < n; i++)
   {
       int s; cin >> s;
       vector<int> tmp(s);
       for(int j = 0; j < s; j++)
       {
           cin >> tmp[j];
       }

       reverse(tmp.begin(), tmp.end());
       for(auto u : tmp)
       {

           if(!seen[u]) {
               arr[i].push_back(u);
               seen[u] =1;
           }

       }

       for( int x : arr[i])
       {
           seen[x] = 0;
       }


   }
   vector<int> Q;
   for(int j = 0; j < n; j++)
   {
       int bst = -1;
       vector<int> ans;

       for(int i = 0; i<n; i++)
       {
           if(taken[i]) continue;


           vector<int> curr;
           for(int u : arr[i])
           {
               if(!seen[u]) curr.push_back(u);
           }


           if(bst ==-1 || curr < ans)
           {
               ans = curr;
               bst =i;
           }
       }
       taken[bst] = 1;
       for(auto u : ans)
       {
           Q.push_back(u);
           seen[u] = 1;
       }


   }
   for(auto u : Q)
   {
       seen[u] = 0;
       cout << u << " ";
   }
   cout <<"\n";
       
       




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
