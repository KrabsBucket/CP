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
   int n, k; cin >> n >> k;
   vector<int> arr(n);
   for(auto &x : arr)
   {
       cin >> x;
   }
   
   sort(arr.begin(), arr.end());
   vector<int> suff(n+1);
   int i = n-1;
   int j = n-1;
   while(j >= 0)
   {
       while(i <= j)
       {
           suff[j] = max(i-j+1, suff[j+1]);
           j--;
       }
       if(j < 0 ) break;
       if(arr[i]-arr[j] <= k)
       {
           suff[j] = max(i-j+1, suff[j+1]);
            j--;
       }
       else
       {
           i--;
       }
   }

   ll c = 0;
   i = 0;
   j = 0;
    ll cnt = 0;
   while(i < n)
   {
       while(j < n && arr[j] - arr[i] <= k)
       {
           j++;
       }

       cnt = (j-i) + suff[j];
       c = max(c, cnt);
       i++;
   }
   cout << c << "\n";




}

int main() {
    fastio;


     freopen("diamond.in", "r", stdin);
     freopen("diamond.out", "w", stdout);

    solve();

    return 0;
}
