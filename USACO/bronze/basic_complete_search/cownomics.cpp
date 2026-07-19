#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n, m; cin >> n >> m;
   vector<string> spotty(n);
   vector<string> plain(n);
  
   rep(i, 0, n)
   {
       cin >> spotty[i];
   }

   rep(i, 0, n)
   {
       cin >> plain[i];
   }

   int c = 0;
   rep(i, 0, m)
   {
       bool flag = true;
       rep(j,0,n)
       {
           rep(k, 0, n)
           {
                if (spotty[j][i] == plain[k][i])
                {
                    flag = false;
                    break;
                }
           }

           if(!flag)
           {
               break;
           }
               
       }
       if(flag)
       {
           c++;
       }
   }
   cout << c << "\n";






}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("cownomics.in", "r", stdin);
     freopen("cownomics.out", "w", stdout);

    solve();

    return 0;
}
