#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;

   ll s = (n*(n-1))/2;
   

   vector<ll> arr(s);

   rep(i, 0, s)
   {
       cin >> arr[i];
   }

   sort(arr.begin(), arr.end());
   
   ll jump = n-1;
   ll idx = 0;

   while(idx < s)
   {
       cout << arr[idx] << " ";
       idx += jump;
       jump--;

   }
   cout << arr.back() <<"\n";

   
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
