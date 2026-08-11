#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<int> vec (n);
   rep(i, 0, n)
   {
       cin >> vec[i];
   }
   if(n ==1 )
   {
       cout << 1 << "\n";
   }
   sort(vec.begin(), vec.end());
   vector<int> pass(n);
   pass[0] = 1;
   pass[n-1] = n-2; 



   rep(i, 1, n-1)
   {
       pass[i] = ((vec[i+1] - vec[i]) >= (vec[i] - vec[i-1])) ? i-1:i+1;
   }




   vector<int> check(n);
    rep(i, 0, n)
   {
       check[pass[i]] += 1;
   }

    int s = 0;
    rep(i, 0, n)
    {
        if (check[i] == 0)
        {
            s+=1;
        }

    }
    int sp =0;
    rep(i, 0, n-1)
    {
        if((pass[i] == i+1 && pass[i+1] == i) && (check[i] == 1 && check[i+1] == 1 ))
        {
            sp++;
        }
    }
    cout << sp + s << "\n";


}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    freopen("hoofball.in", "r", stdin);
   freopen("hoofball.out", "w", stdout);

    solve();

    return 0;
}
