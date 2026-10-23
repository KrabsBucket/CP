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
   bool flg = true;
   vector<int> arr(n);
   for(auto &x : arr)
   {
       cin >> x;
   }

   sort(arr.begin(), arr.end());
   int mi = INT_MAX;

    if(arr[n-2] - arr[0] == n-2 && arr[n-1] - arr[n-2] > 2 )
   {
       mi = 2;
   }
    else if(arr[n-1] - arr[1] == n-2 && arr[1] - arr[0] > 2)
   {
       mi = 2;
   }
    else
   {
       int mm = 0;
       int right = 0;
       for(int left = 0; left < n ; left++)
       {
           while(right < n && arr[right] - arr[left] < n)
           {
               right++;
           }

           mm = max(mm, right - left);
       }
       mi = n-mm;
   }

    int ts = (arr[n-1] - arr[0] +1)-n;
    int l = arr[1] - arr[0] - 1;
    int r = arr[n-1] - arr[n-2] -1;

    int mm = ts - min(l,r);

    cout << mi << "\n" << mm << "\n";

       
   







}


int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("herding.in", "r", stdin);
     freopen("herding.out", "w", stdout);

    solve();

    return 0;
}
