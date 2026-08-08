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
   vector<int> arr(n-1);

   for(int i=0;i < n-1;i++)
   {
       cin >> arr[i];
   }

   int m = -1;
   vector<bool> check(n+1, false);
   int shape = 1;

   for(int x = 0; x< n-1; x++)
   {
       m = max(arr[x], m);
        if (x > 0 && arr[x] != arr[x-1] && check[arr[x]]) {
            
            cout << 0 << "\n";
            return;
        }

       check[arr[x]] = true;
    
   }
   if (m != n-1)
   { 
       cout << 0 << "\n";
       return;
   }
   


   for(int i = 0; i< n-2; i++)
   {
       if ( arr[i]== n-1)
        {
           shape = -1;
        }


       if (arr[i+1] - arr[i] != shape* abs(arr[i+1] - arr[i]))
       {
           cout << 0 << "\n";
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
