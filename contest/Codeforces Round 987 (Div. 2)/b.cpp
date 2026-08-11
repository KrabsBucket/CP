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
   vector<bool> chk(n,false);
   vector<int> arr(n);
   for(int i =0; i < n; i++)
   {
       cin >> arr[i];
       arr[i]-- ;
   }

       
   for(int i = 0; i < n; i++)
   {
       if(arr[i] == i)
       {
           chk[i] = true;
       }
       else if(i > 0 && arr[i-1] == i && arr[i] == i-1)
       {
           chk[i-1] = true;
           chk[i] = true;
       }
   }
   for(int i  =0; i < n; i++)
   {
       if(!chk[i])
       {
           cout << "NO\n";
           return ; 
       }

   }
   cout << "YES\n";
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
