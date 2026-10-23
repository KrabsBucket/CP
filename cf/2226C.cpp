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

  bool check(int k,   const vector<int>& arr) {
       vector<int>   chk(k, 0);
    vector<int> ele;
    
  for(int x : arr){
     if(x < k && !chk[x]) {
              chk[x] = 1;
  }   else{
          ele.push_back(x);
       }
     }

        vector<int> emp;
  for(int i = 0; i < k; ++i) {
         if(!chk[i]) {
        emp.push_back(i);
       }
    }
      
  int j = 0;
   for(int h : emp) {
       while(j < ele.size()   && ele[j] < 2 * h + 1) {
          j++;
    }
          if(j == ele.size()) {
               return false;
        }
    j++;
     }
   return true;
}

void solve()    {
     int n; 
       cin >> n;
       vector<int>arr(n);
    for(auto &x : arr)
       {
     cin >> x;
       }
       
   sort(arr.begin(), arr.end());
      
  int low = 0,   high = n, ans = 0;
    while(low <= high)   {
         int mid = low + (high - low) / 2;
     if(check(mid, arr)) {
              ans = mid;
             low = mid + 1;
       } else {
             high = mid - 1;
       }
     }
       
       cout << ans << "\n";
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
