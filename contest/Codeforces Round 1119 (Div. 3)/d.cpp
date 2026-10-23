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
   int c0 = 0;
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
       if(arr[i] == 0)
       {
           c0++;
       }
   }
   if(c0 == 1)
   {
       cout << "NO\n";
       return;
   }
   else if(c0 == 0)
   {
       cout << "YES\n";
       for(int i = 0; i < n; i++)
       {
           if(i < 1)
           {
               cout << "A";
           }
           else
           {
               cout << "B";
           }
       }
       cout << "\n";
       return;
   }
   else
   {
       int c = 0;
       cout << "YES\n";
       for(int i = 0; i < n; i++)
       {
           if(arr[i] == 0 && c < 1)
           {
               cout << "A";
               c++;
           }
           else if(arr[i] == 0 )
           {
               cout << "B";
           }
           else
           {
               cout << "C";
           }
       }
           cout << "\n";
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
