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
   for(int i =0; i < n; i++)
   {
       cin >> arr[i];
   }

   vector<int> ans;
   vector<int> len;

   for(int i = 0; i < n; i++)
   {
       if(ans.empty()|| ans.back() != arr[i])
       {
           ans.push_back(arr[i]);
           len.push_back(1);
       }
       else
       {
           len.back()++;
       }
   }

   int sol = ans.size();

   bool p2 = false;
   bool p1 = false;
   for(int i = 0;i < len.size()-1; i++)
   {
       if(len[i] >= 2 && len[i+1] >=2 )
       {
           p2 = true;
           break;
       }
   }

   if (p2)
   {
       cout << sol +2 << "\n";
       return;
   }
   for(int i = 0; i < sol ; i++)
   {
       if(len[i] >= 2)
       {
           if(i+1 < sol)
           {
               if(i+2 >= sol || ans[i+2] != ans[i])
               {
                   p1 = true;
                   break;

               }
           }
           if (i -1 >= 0)
           {
               if (i -2 < 0 || ans[i-2] != ans[i])
               {
                   p1 = true;
                   break;
               }
           }
       }
   }

   if (p1)
   {
       cout << sol + 1 << "\n";
   }
   else
   {
       cout << sol << "\n";
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
