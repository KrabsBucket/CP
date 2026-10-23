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
   vector<int> arr(n+1);
   for(int i = 1; i <= n; i++)
   {
       cin >> arr[i];
   }

   vector<int> prf(n+2, 0);

   for(int i = 1; i <= n; i++)
   {
       if(arr[i] != -1 && arr[i] > 0)
       {
           int L = i - arr[i] + 1;
           int R = i + arr[i] - 1;

           if(L <= R)
           {
               prf[max(1, L)]++;
               prf[min(n+1, R+1)]--;
           }
       }
   }

   for(int i = 1; i <= n; i++)
   {
       prf[i] += prf[i-1];
   }

   vector<int> mp(n+2, 0);

   for(int i = 1; i <= n; i++)
   {
       if(prf[i] == 0)
           mp[i] = 1;
   }

   for(int i = 1; i <= n; i++)
   {
       if(arr[i] == -1)
           continue;

       if(arr[i] == 0)
       {
           if(mp[i] == 0)
           {
               cout << -1 << "\n";
               return;
           }
       }
       else
       {
           int d = arr[i];
           bool ok = false;

           if(i - d >= 1 && mp[i-d])
               ok = true;

           if(i + d <= n && mp[i+d])
               ok = true;

           if(!ok)
           {
               cout << -1 << "\n";
               return;
           }
       }
   }

   string s = "";

   for(int i = 1; i <= n; i++)
   {
       if(mp[i])
           s += "1";
       else
           s += "0";
   }

   cout << s << "\n";
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
