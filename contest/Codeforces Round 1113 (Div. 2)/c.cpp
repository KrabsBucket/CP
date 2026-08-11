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
    struct nums{
        int val = 0;
        int str = 0;
        int end = 0;
        int len = 0;;
    };
   int n; cin >> n;
   vector<int> arr(2*n+1);
   vector<nums> vec(n+1);
   for(int i =1; i <= 2*n; i++)
   {
       cin >> arr[i];
       vec[arr[i]].val = arr[i];
       if (vec[arr[i.str == 0)
       {
           vec[arr[i]].second.first = i;
       }
       else
       {
           vec[arr[i]].second.second = i;
       }
        vec[arr[i]].first = vec[arr[i]].second.second - vec[arr[i]].second.first +1;
   }

   sort(vec.rbegin(), vec.rend());
   vector<pair<int,int>> chk (n+1, {1,1});
   ll score = 0;
   for(int j = 0; j < n; j++)
   {
       if(chk[arr[vec[j].second.first]].first && chk[arr[vec[j].second.first]].second)
       {
           for(int i = vec[j].second.first; i <= vec[j].second.second; i++)
           {
               if (chk[arr[i]].first)
               {
                   chk[arr[i]].first = 0;
               }
               else
               {
                   chk[arr[i]].second = 0;
               }
           }
       }
       score += (vec[j].first*vec[j].first);

   }
   for(int i = 1; i <= n; i++)
   {
       if(chk[i].first || chk[i].second)
       {
        score++;
       }
   }

   cout << score << "\n";
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
