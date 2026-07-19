#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n, k; cin >>n >> k;
   int a, c, d, b; cin >> a >> b >> c >> d;
   vector<int> vec(n);
   rep(i, 0, n)
   {
       vec[i] = i+1;
   }
   vector<int> arr = vec;
   int i = 0;

   bool flag = true;
   while(flag)
   {
       reverse(vec.begin()+a-1, vec.begin()+b);
       reverse(vec.begin()+c-1, vec.begin()+d);
       i++;
       flag = false;
       rep(i, 0, n)
       {
           if (vec[i] != arr[i])
           {
               flag = true;
           }
       }

   }

   k %= i;
   rep(i, 0, k )
   {
       reverse(vec.begin()+a-1, vec.begin()+b);
       reverse(vec.begin()+c-1, vec.begin()+d);
   }

   rep(i, 0, n)
   {
       cout << vec[i] << "\n";
   }
       


}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
//freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
freopen("swap.in", "r", stdin);
 freopen("swap.out", "w", stdout);

    solve();

    return 0;
}
