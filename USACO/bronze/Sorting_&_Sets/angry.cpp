#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<int> vec(n);

   rep(i, 0, n)
   {
       cin >> vec[i];
   }
   sort(vec.begin(), vec.end());

   int c = 0;

   rep(k, 0, n)
   {
        int t = 1;
        bool f1 = true;
        bool f2 = true;
            int i = k;
            int j = k;
            int count = 1;
       while (f1 || f2)
       {
            int p = i-1;
            int q = j+1;
            if ((i > 0 && vec[i] - vec[p] > t) || i == 0)
            {
                f1 = false;
            }
            if ((j < n-1  && vec[q] - vec[j] > t) || j == n-1)
            {
                f2 = false;
            }
                
            while (p >= 0 && f1)
            {
                if(vec[i] - vec[p] <= t)
                {
                    p--;
                    count++;
                }
                else
                {
                    break;
                }


            }
            i = p+1;
            while(q <= n-1 && f2)
            {
                if(vec[q] - vec[j] <= t)
                {
                    q++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            j = q-1;

            t++;

       }

       c = max(count, c);

   }

   cout << c << "\n";



}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    freopen("angry.in", "r", stdin);
     freopen("angry.out", "w", stdout);

    solve();

    return 0;
}
