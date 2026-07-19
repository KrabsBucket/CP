#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<int> arr(n);
   bool flag = false;
   int m1 = -1;
   int c1 = 0;
   int c2 = 0;
   rep(i, 0, n)
   {
       cin >> arr[i];
       if (c1 >= c2 && arr[i] == 2 && c1> 0 && i != n-1)
       {
           flag = true;
       }
       if(arr[i] == 1)
       {
           c1++;
       }
       else 
       {
            c2++;
       }

       if (c1 >= c2)
       {
           m1 = i;
       }
       

   }

   if (flag)
   {
       cout << "YES\n";
       return;
   }
   if(m1 == -1)
   {
       cout << "NO\n";
       return;
   } 

   c2 = 0;
   int c3 = 0;
   rep(i, m1+1, n)
   {
       if (arr[i] == 3)
       {
           c3++;
       }
       else 
       {
           c2++;
       }
       if(i != n-1 && c2 == c3)
       {
           cout << "YES\n";
           return;
       }

   }
   cout << "NO\n";



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
