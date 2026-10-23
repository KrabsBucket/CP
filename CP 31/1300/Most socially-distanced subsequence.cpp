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
   vector<int> arr(n);
   for(auto &x : arr)
   {
       cin >> x;
   }
   vector<int> a;
   int s = 0;

   for(int i = 0; i < n-1; i++)
   {
       if(arr[i+1] > arr[i] && s != 1)
       {
           a.push_back(arr[i]);
           s = 1;
       }
       else if(arr[i+1] < arr[i] && s != -1)
       {
           a.push_back(arr[i]);
            s=-1;
       }
   }
   
   a.push_back(arr[n-1]);
   cout << a.size() <<"\n";
   for(auto &u : a)
   {
       cout << u << " "; 
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
